`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:09:56 06/12/2023
// Design Name:   i2c_master
// Module Name:   E:/ise_project/try_parallel_port/i2c_tb.v
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

module i2c_tb;

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
	reg [7:0]temp_reg;
	wire [7:0]temp_in;
	//reg [7:0] SDA_reg;
	//assign SDA = SDA_reg;
	// Instantiate the Unit Under Test (UUT)
	i2c_master uut ( 
		.SCL(SCL), 
		.SDA_OUT(SDA), 
		.CLK(CLK), 
		.RES(RES),
		.start(start),
		.temp_reg_d1(temp_reg), 
		.temp_input(temp_in),
		.rw(RW),
		.adr(ADR)
//		.adr_reg(ADR_REG)
	);

	initial begin
		// Initialize Inputs
		//SCL = 0;
		CLK = 0;
		RES = 0;
		SDA_REG <= 1'bz;
		temp_reg <= 8'h01;
		//temp_in <= 8'h00;
		// Wait 100 ns for global reset to finish
		#100;
//			ADR_REG <= 8'h01;
	   	RES <= 1;		
			RW <= 1;
			ADR <= 4'b101;
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
			SDA_REG <= 1'b1;			
			#2
				SDA_REG <= 1'bz;
		// #3 
		// 	SDA_REG <= 0;

		// #3
		// 	SDA_REG <= 1'bz;
		#50
		$display("\n\n where %b", temp_in);

		//@posedge SCL
		// Add stimulus here
	end
		always  
			#1 CLK =  ! CLK;    //�������� clk  
      
       

endmodule

