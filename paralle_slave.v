`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:13 06/08/2023 
// Design Name: 
// Module Name:    paralle_slave 
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
module paralle_slave(
	ADR, Data, BWR, BRD, CLK 
    );
	input [9:0] ADR;
	input BWR, BRD, CLK;
	inout [7:0] Data; 
	reg [7:0] outDATA;
	reg [4:0] setUpReg;
	assign Data = BRD ? 8'bz : outDATA;
	 
	always @(posedge BWR)
		begin
			//$display ("hello");
			if(ADR[9:4] == 6'b00_0101)
				//$display ("hello");
				case(ADR[3:0])
					4'b0: 
						begin 
							setUpReg[4:0] <= Data[4:0];
							//$display ("hello");
						end

				endcase
		end//
			
		
	always @(posedge ADR or setUpReg)//or another register
		begin
			if(ADR[9:4] == 6'b00_0101)
				case(ADR[3:0])
					4'b0: outDATA <= setUpReg;
				endcase
		end





endmodule
