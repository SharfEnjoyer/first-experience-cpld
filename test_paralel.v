`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:38:31 06/09/2023
// Design Name:   paralle_slave
// Module Name:   E:/ise_project/try_parallel_port/test_paralel.v
// Project Name:  try_parallel_port
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: paralle_slave
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_paralel;

	// Inputs
	reg [9:0] ADR;
	reg BWR;
	reg BRD;
	reg CLK;
	//wire outDATA[7:0];
	// Bidirs
	wire [7:0] Data;
	reg [7:0] DataReg;
	assign Data = DataReg;
	//output [7:0] Data;
	reg [7:0] testData;
	
	// Instantiate the Unit Under Test (UUT)
	paralle_slave uut (
		.ADR(ADR), 
		.Data(Data), 
		.BWR(BWR), 
		.BRD(BRD), 
		.CLK(CLK)
		//,.setUpReg(setUpReg)
	);
	//
	
	initial begin
		// Initialize Inputs
		ADR = 0;
		BWR = 1;
		BRD = 1;
		CLK = 0;
		//outData = 8'b100;

		
		
		// Wait 100 ns for global reset to finish
		ADR <= 10'b00_0101_0000;
		DataReg = 8'b100;
		#100;
		BWR <= 'b0;
		#50;
		BWR <= 'b1;
		#50;
		ADR <= 10'b0;
		DataReg = 8'bz;
		#50;
		ADR <= 10'b00_0101_0000;
		#50;
		BRD <= 'b0;
		#50;
		BRD <= 'b1;
		#50;
		testData[7:0] <= Data;
		#50;
		// Add stimulus here

	end
      
endmodule

