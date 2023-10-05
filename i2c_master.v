`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:24 06/09/2023 
// Design Name: 
// Module Name:    i2c_master 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module i2c_master(//
		SCL, SDA, CLK, RES, SDA_OUT, SDA_IN, start, rw, adr, i2c_end, temp_input, temp_reg_d1, temp_output_d2, temp_error, SDA_EN
		
    );
	parameter I2C_WORD = 8;
 

	parameter I2C_IDLE = 0;
	parameter I2C_START = 1;//to much 
	
	parameter I2C_PAUSE = 14;
	
	parameter I2C_ADDRESS = 2;
	parameter I2C_ADDRESS_2 = 12;
	parameter I2C_ADDRESS_3 = 13;
	
	
	parameter I2C_ACK1 = 3;
	 
	parameter I2C_FIRST_M = 4;
	parameter I2C_FIRST_M_2 = 15;
	parameter I2C_FIRST_M_3 = 16;
	
	parameter I2C_ACK2 = 5;
	
	parameter I2C_SECONDE_M = 6;
	parameter I2C_SECONDE_M_2 = 17;
	parameter I2C_SECONDE_M_3 = 18;
	 
	parameter I2C_ACK3 = 7;

	parameter I2C_THIRD_S = 8;
	parameter I2C_THIRD_S_2 = 19;
	parameter I2C_THIRD_S_3 = 20;

	parameter I2C_NACK = 9;
	parameter I2C_STOP = 10;
	parameter I2C_STOP2 = 11;

	//input [7:0]adr_reg;
	input RES; 
	input CLK;
	input rw;
	input [2:0]adr;
	output reg i2c_end;
	output reg SCL;
	output reg SDA_OUT;
	inout SDA_IN;// erro when input
	// reg SDA_IN_REG 
	// assign SDA_IN = SDA_EN ? 8'bz : SDA_IN_REG;
	output reg SDA_EN;
	inout SDA;

	reg [7:0]temp;// full first word  with adr and RW
	reg [7:0]temp_reg;// slave reg adr
	reg [7:0]temp_output;//data to slave 
	output reg [7:0]temp_input;// data from slave 
	output reg [3:0]temp_error;// error 

	input [7:0] temp_reg_d1;
	input [7:0] temp_output_d2;

	// assign temp_reg = temp_reg_d1;
	// assign temp_output = temp_output_d3;


	reg [7:0] state;
	input start;
	
	
	// IOBUFE sda1 (
	// .O(SDA_IN), // Buffer output
	// .IO(SDA), // Buffer inout port (connect directly to top-level port)
	// .I(SDA_OUT), // Buffer input
	// .E(SDA_EN) // 3-state enable input
	// );

	reg [3:0] i = 0;
	//assign temp_reg = adr_reg;
	

//	function I2C_TRX;
//		input state;
//		parameter state_local = state;
//		case(state)
//			state_local: 
//				begin
//					if(i < 9) 
//						begin
//							SDA_OUT <= temp[7];
//							SCL <= 0;
//							state <= 100;
//							$display ("%b, %b", temp, temp[7]);
//						end  
//					else
//						begin
//							i = 0;
//							state <= I2C_ACK1;
//							SDA_OUT <= 0;
//							SDA_EN <= 0;
//						end
//				end
//			100: 
//				begin
//					SCL <= 1;
//					state <= 200;
//				end	
//			200:
//				begin
//					SDA_OUT <= temp[7];
//					SCL <= 0;  
//					i <= i+1;
//					temp = temp << 1;
//					state <= state_local;
//				end
//		endcase
//	  	I2C_TRX = state_local;
//	endfunction
		 
	always @(posedge CLK or posedge RES)begin
		//$display("temp, %b", temp_input);
			if(RES == 1)begin
					state <= I2C_IDLE;
					SDA_OUT <= 1;
					SCL <= 1; 
					SDA_EN <= 1;
					i2c_end <= 0;
					temp_output <= temp_output_d2;
					temp_reg <= temp_reg_d1;
				end
			else
				begin
					case(state)
						I2C_IDLE: 
						begin 
							i2c_end <= 0;
							if(start)
								begin
									SDA_OUT <= 1;	
									SDA_OUT <= 1;
									SCL <= 1; 
									SDA_EN <= 1;
									i2c_end <= 0;
									temp_output <= temp_output_d2;
									temp_reg <= temp_reg_d1;
									state <= I2C_START;
								end
						end
						I2C_START:
						begin
							temp <= {4'b1001, adr, 1'b0};
							SDA_OUT <= 0;
							SCL <= 1;
							state <= I2C_PAUSE; 
						end
						I2C_PAUSE: 
						begin
							SCL <= 0;
							state <= I2C_ADDRESS; 
						end
						I2C_ADDRESS: 
							begin
								if(i < I2C_WORD) 
									begin
										SDA_OUT <= temp[7];
										SCL <= 0;
										state <= I2C_ADDRESS_2;
										$display ("%b, %b", temp, temp[7]);
									end  
								else
									begin
										state <= I2C_ACK1;
										i <= 0;
										SDA_OUT <= 0;
										SDA_EN <= 0;
									end
							end
						I2C_ADDRESS_2: 
							begin
								SCL <= 1;
								state <= I2C_ADDRESS_3;
							end	
						I2C_ADDRESS_3:
							begin
								SDA_OUT <= temp[7];
								SCL <= 0;  
								i <= i+1;
								temp <= temp << 1;
								state <= I2C_ADDRESS;
							end 
						I2C_ACK1: 
							begin
								SCL <= 1;
								if(SDA_IN)
									begin
										state <= I2C_STOP;
										temp_error <= temp_error + 1;
										$display("status, %b, %b", SDA_IN, SDA_EN);
									end
								else if(!i)
									begin
										i <= i + 1;
										state <= I2C_ACK1;

									end
								else
									begin
										SCL <= 0;
										i <= 0;
										state <= I2C_FIRST_M;
										//temp_reg <= 8'h01;
										$display("\n");
									end
							end
						I2C_FIRST_M: 
							begin
								if(i < I2C_WORD) 
									begin
										SDA_OUT <= temp_reg[7];
										SDA_EN <= 1;
										SCL <= 0;
										state <= I2C_FIRST_M_2;
										$display ("%b, %b", temp_reg, temp_reg[7]);
									end  
								else
									begin
										state <= I2C_ACK2;
										i <= 0;
										SDA_OUT <= 0;
										SDA_EN <= 0;
									end
							end
						I2C_FIRST_M_2:
							begin
								SCL <= 1;
								state <= I2C_FIRST_M_3;
							end
						I2C_FIRST_M_3:
							begin
								SCL <= 0;  
								i <= i+1;
								temp_reg <= temp_reg << 1;
								state <= I2C_FIRST_M;
							end
						I2C_ACK2: 
							begin
								SCL <= 1;
								if(SDA_IN)
									begin
										state <= I2C_STOP;
										temp_error <= temp_error + 1;
										$display("status, %b, %b", SDA_IN, SDA_EN);
									end
								else if(!i)
									begin
										//SCL <= 1;
										i <= i + 1;
										state <= I2C_ACK2;

									end
								else
									begin
										SCL <= 0;
										i <= 0;
										state <= I2C_SECONDE_M;
										temp <= {4'b1001, adr, 1'b1};
										//temp_output <= 8'b0010_0000;// 1:alert pin 7 0 off; 2: shutdown bit 0 on; 3: 00; 4: range 0 -40 to +127 1 -64 to +191; 5:00 
										$display("\n");
									end
							end
						I2C_SECONDE_M: 
							begin
								if(rw)
									begin
										if(i < I2C_WORD) 
											begin
												SDA_OUT <= temp[7];
												SCL <= 0;
												SDA_EN <= 1;
												state <= I2C_SECONDE_M_2;
												$display ("%b, %b", temp, temp[7]);
											end  
										else
											begin
												state <= I2C_ACK3;
												i <= 0;
												SDA_OUT <= 0;
												SDA_EN <= 0;
											end
									end
								else
									begin
										if(i < I2C_WORD) 
											begin
												SDA_OUT <= temp_output[7];
												SDA_EN <= 1;
												SCL <= 0;
												state <= I2C_SECONDE_M_2;
												$display ("%b, %b", temp_output, temp_output[7]);
											end  
										else
											begin
												state <= I2C_ACK3;
												i <= 0;
												SDA_OUT <= 0;
												SDA_EN <= 0;
											end
									end
							end
						I2C_SECONDE_M_2:
							begin
								SCL <= 1;
								state <= I2C_SECONDE_M_3;
							end
						I2C_SECONDE_M_3:
							begin
								SCL <= 0;  
								i <= i+1;
								temp <= temp << 1; 
								temp_output <= temp_output << 1;
								state <= I2C_SECONDE_M;
							end
						I2C_ACK3: 
							begin
								SCL <= 1;
								if(SDA_IN)
									begin
										state <= I2C_STOP;
										temp_error <= temp_error + 1;
										$display("status, %b, %b", SDA_IN, SDA_EN);
									end
								else if(!i)
									begin
										//SCL <= 1;
										i <= i + 1;
										state <= I2C_ACK3;

									end
								else
									begin
										SCL <= 0;
										i <= 0;
										if(rw)
											state <= I2C_THIRD_S;
										else
											state <= I2C_STOP;
										SDA_EN <= 0;
										temp_input <= 8'b0;
										$display("\n");
									end
								

							end
						I2C_THIRD_S: 
							begin
								if(i < I2C_WORD) 
									begin
										//temp_input[I2C_WORD - i -1] <= SDA_IN;
										temp_input <= temp_input << 1;
										SCL <= 0;
										state <= I2C_THIRD_S_2;
										$display("%b, %b, %b", temp_input, temp_input[0], SDA_IN);
									end  
								else
									begin 
										state <= I2C_NACK;
										i <= 0;
										SDA_OUT <= 1;
										SDA_EN <= 1;
										if(temp_input != 8'b0)
											SDA_OUT <= 0;
										else
											SDA_OUT <= 1;
									end
							end
						I2C_THIRD_S_2:
							begin
								//temp_input[I2C_WORD - i -1] <= SDA_IN;
								//temp_input[0] <= SDA_IN;
								SCL <= 1;
								state <= I2C_THIRD_S_3;
							end
						I2C_THIRD_S_3:
							begin
								temp_input <= {temp_input[7:1], SDA_IN};
								SCL <= 0;  
								i <= i+1;
								state <= I2C_THIRD_S;
							end
						I2C_NACK: 
							begin
								SCL <= 0;
								//$display("\n\n how %b", temp_input);
								//$display ("try1 %d", $time);
								
								if(temp_input >= 8'b0)//!= 8'hzz && temp_input != 8'hxx)
									begin
										state <= I2C_STOP;
										SDA_OUT <= 0;										
										$display("success %b", temp_input);
									end
								else
									begin
										state <= I2C_STOP; // try start from the beginning 
										SDA_OUT <= 1;
										temp_error <= temp_error + 1;
										$display("error %b", temp_input);
									end	
								if(!i) 
									begin
										SCL <= 1;
										state <= I2C_NACK;
										i <= i + 1;
										//$display ("try %d", $time);
									end

							end
						//error bit 
						I2C_STOP: 
							begin
								$display ("stop %d", $time);
								i <= 0;
								SCL <= 0;
								SDA_OUT <= 0;
								SDA_EN <= 1;
								state <= I2C_STOP2;
							end
						I2C_STOP2:
							begin 
								//$display ("stop %d", $time);
								i <= 0;
								SCL <= 1;
								SDA_OUT <= 0;
								SDA_EN <= 1;
								state <= 21;
							end
						21:
							begin 
								SDA_OUT <= 1;
								i2c_end <= 1;
								state <= 0;
								//$display("f %b", temp_input);
							end
						
						default:
							begin 
								$display ("error %d", $time);
								state <= I2C_IDLE;					
							end
					endcase
				end
	end




endmodule
