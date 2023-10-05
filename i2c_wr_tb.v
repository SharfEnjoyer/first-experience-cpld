`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:15:58 06/16/2023
// Design Name:   i2c_master
// Module Name:   E:/ise_project/try_parallel_port/i2c_wr_tb.v
// Project Name:  try_parallel_port
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_master
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i2c_wr_tb;
// Inputs
	reg CLK;
	reg RES;
	reg start;
	reg RW;
	reg [2:0] ADR;
//	reg [7:0]ADR_REG;
	// Outputs

	// Bidirs
	wire SDA;
	wire SCL;
	reg SDA_REG;
	assign SDA = SDA_REG; 

	//reg [7:0] SDA_reg;
	//assign SDA = SDA_reg;
	// Instantiate the Unit Under Test (UUT)
	//wire [7:0] temp_input;
	reg [7:0] temp_reg;
	reg [7:0] temp_output;
	reg [3:0] temp_error;

	i2c_master uut ( 
		.SCL(SCL), 
		.SDA(SDA), 
		.CLK(CLK), 
		.RES(RES), 
		.start(start),
		.rw(RW),
		.adr(ADR),
		//.temp_input(temp_input), 
		.temp_reg_d1(temp_reg), 
		.temp_output_d2(temp_output), 
		.temp_error(temp_error)
//		.adr_reg(ADR_REG)
	);

	initial begin
		// Initialize Inputs
		//SCL = 0;
		CLK = 0;
		RES = 0;
		SDA_REG <= 1'bz;
		
		// Wait 100 ns for global reset to finish
		#100;
//			ADR_REG <= 8'h01;
	   	RES <= 1;		
			RW <= 0;
			ADR <= 4'b101;
			temp_reg = 0'h09;
			temp_output =  8'b0010_0000; // 1:alert pin 7 0 off; 2: shutdown bit 0 on; 3: 00; 4: range 0 -40 to +127 1 -64 to +191; 5:00 
			SDA_REG <= 1'bz;

		#50;
			RES <= 0;
			start <= 1;
		#50
			start <= 0;
		#6
			SDA_REG <= 0;
		#4
			SDA_REG <= 1'bz;
		#50
			SDA_REG <= 0;
		#4
			SDA_REG <= 1'bz;
		#50
			SDA_REG <= 0;
		#4
		 	SDA_REG <= 1'bz;
		#2 
			SDA_REG <= 0;
		#19 
			SDA_REG <= 1;
			#2
			SDA_REG <= 0;
		#4 
			SDA_REG <= 1;
			#2
			SDA_REG <= 0;
		#4 
			SDA_REG <= 0;
			#2
			SDA_REG <= 0;
		#4 
			SDA_REG <= 0;
			#2
			SDA_REG <= 0;
		#4 
			SDA_REG <= 1;

		#2
			SDA_REG <= 1'bz;
			
		// #6
		// 	SDA_REG <= 0;
		// #4
		// 	SDA_REG <= 1'bz;
		// #50
		// 	SDA_REG <= 0;
		// #4
		// 	SDA_REG <= 1'bz;
		// #50
		// 	SDA_REG <= 0;
		// #4
		//  	SDA_REG <= 1'bz;



		// #2 
		// 	SDA_REG <= 0;
		// #19 
		// 	SDA_REG <= 1;
		// 	#2
		// 	SDA_REG <= 0;
		// #4 
		// 	SDA_REG <= 1;
		// 	#2
		// 	SDA_REG <= 0;
		// #4 
		// 	SDA_REG <= 0;
		// 	#2
		// 	SDA_REG <= 0;
		// #4 
		// 	SDA_REG <= 0;
		// 	#2
		// 	SDA_REG <= 0;
		// #4 
		// 	SDA_REG <= 1;

		// #2
		// 	SDA_REG <= 1'bz;
		

		//@posedge SCL
		// Add stimulus here
	end
		always  
			#1 CLK =  ! CLK;    //�������� clk  
      
       

endmodule

