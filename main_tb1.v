`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:57:42 06/19/2023
// Design Name:   main
// Module Name:   E:/ise_project/try_parallel_port/main_tb1.v
// Project Name:  try_parallel_port
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb1;

	// Inputs
	reg CLK;
	reg RES;
	
	reg [9:0] ADR;
	reg BWR;
	reg BRD;
	
	// Outputs
	// wire SDA;

	// reg SDA_REG;
	// assign SDA = SDA_REG;

	wire SDA_OUT1;
	reg SDA_REG1;
	assign SDA_OUT1 = SDA_REG1;

	wire SDA_OUT2;
	reg SDA_REG2;
	assign SDA_OUT2 = SDA_REG2;

	wire SDA_OUT3;
	reg SDA_REG3;
	assign SDA_OUT3 = SDA_REG3;
	
	wire SDA_OUT4;
	reg SDA_REG4;
	assign SDA_OUT4 = SDA_REG4;

	wire SCL_OUT1;
	wire SCL_OUT2;
	wire SCL_OUT3;
	wire SCL_OUT4;

	// Bidirs
	wire [7:0] Data;

	reg [7:0] DataReg;
	assign Data = DataReg;
	reg [7:0] testData;
	
	wire [7:0]i2c_input;
	
	// Instantiate the Unit Under Test (UUT)
	main uut (
		.CLK(CLK), 
		.RES(RES),
		.ADR(ADR), 
		.Data(Data), 
		.BWR(BWR), 
		.BRD(BRD), 
		//.SCL(SCL), 
		//.SDA(SDA), 
		.SDA_OUT1(SDA_OUT1), 
		.SDA_OUT2(SDA_OUT2), 
		.SDA_OUT3(SDA_OUT3), 
		.SDA_OUT4(SDA_OUT4), 
		.SCL_OUT1(SCL_OUT1), 
		.SCL_OUT2(SCL_OUT2), 
		.SCL_OUT3(SCL_OUT3), 
		.SCL_OUT4(SCL_OUT4)
	);

		// Initialize Inputs
	initial begin
		
		
		ADR <= 10'b00_0101_0001;// write data to sensor reg
		DataReg = 8'h09;// write data to set up reg sensor
		
		CLK = 0;
		RES = 0;
		BWR <= 'b1;
		BRD <= 'b1;
		RES <= 1;
		
		SDA_REG1 <= 1'bz;
		SDA_REG2 <= 1'bz;
		SDA_REG3 <= 1'bz;
		SDA_REG4 <= 1'bz; 
		
		#100;
		RES <= 0;
		BWR <= 'b0;
		#50;
		//RES <= 1;
		BWR <= 'b1;
		#50;
		//RES <= 0;
		ADR <= 10'b0;
		DataReg = 8'bz;
		
		// next

		#50;
		ADR <= 10'b00_0101_0010; // data to data reg sensor_data_w
		DataReg = 8'b0010_0000; // set up data

		#100;
		
		BWR <= 'b0;
		#50;
		
		BWR <= 'b1;
		#50;
		ADR <= 10'b0;
		DataReg = 8'bz;

		//next

		#50;
		ADR <= 10'b00_0101_0000; // data to sensor_n start i2c
		DataReg = 8'b0111_1101;// data to start writing master to slave 

		
		#100;
		
		BWR <= 'b0;
		#50;
		
		BWR <= 'b1;
		#50;
		ADR <= 10'b0;
		DataReg = 8'bz;

		//next


		#50;
		ADR <= 10'b00_0101_0001;
		DataReg = 8'b0000_0001;

		#100;
		
		BWR <= 'b0;
		#50;
		
		BWR <= 'b1;
		#50;
		ADR <= 10'b0;
		DataReg = 8'bz;

		//next


		#50;
		ADR <= 10'b00_0101_0000;
		DataReg = 8'b0101_1011;

		#100;
		
		BWR <= 'b0;
		#50;
		
		BWR <= 'b1;
		#50;
		ADR <= 10'b0;
		DataReg = 8'bz;
		

		//next



		// #50;
		// ADR <= 10'b00_0101_0011;
		// #50;
		// BRD <= 'b0;
		// #50;
		// BRD <= 'b1;
		// #50;
		// testData[7:0] <= Data;

		// //next

		// #50;
		// ADR <= 10'b00_0101_0011;
		// #50;
		// BRD <= 'b0;
		// #50;
		// BRD <= 'b1;
		// #50;
		// testData[7:0] <= Data;
		// #50;

		// #50;
		// BRD <= 'b0;
		// #50;
		// BRD <= 'b1;
		// #50;
		// testData[7:0] <= Data;
		// #50;
		



	end
		always  
			#1 CLK =  ! CLK; 
		// Add stimulus here

      
endmodule

