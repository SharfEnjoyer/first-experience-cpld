`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:52:34 06/19/2023 
// Design Name: 
// Module Name:    main 
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
module main(
    CLK, RES,
    ADR, Data, BWR, BRD, 
   // SCL, //SDA,
    SDA_OUT1, SDA_OUT2, SDA_OUT3, SDA_OUT4,
    SCL_OUT1, SCL_OUT2, SCL_OUT3, SCL_OUT4
    );

    input CLK;

    reg [7:0]sensor_n;
    reg [7:0]sensor_reg;
    reg [7:0]sensor_data_w;
    wire [7:0]sensor_data_r;


    input RES;
    wire i2c_end;
    // reg [2:0] i2c_adr;
    // reg [7:0] i2c_pointer_reg;
	// reg [7:0] i2c_data_output;
	//reg [3:0] i2c_error;
    // output reg [7:0] i2c_input;

	//inout SDA;
    wire SDA_EN;
   // output SCL;
    wire SDA;	
    wire SCL;
    wire SDA_MASTER;
    wire SDA_SLAVE;

    

    inout SDA_OUT1;
    wire SDA_EN1;
    output SCL_OUT1;
    wire EN1;
    wire SDA_SLAVE1;
    
    inout SDA_OUT2;
    wire SDA_EN2;
    output SCL_OUT2;
    wire EN2;
    wire SDA_SLAVE2;

    inout SDA_OUT3;
    wire SDA_EN3;
    output SCL_OUT3;
    wire EN3;
    wire SDA_SLAVE3;

    inout SDA_OUT4;
    wire SDA_EN4;
    output SCL_OUT4;
    wire EN4;
    wire SDA_SLAVE4;
    

    IOBUFE sda (
	.O(SDA_SLAVE1), // Buffer output
	.IO(SDA_OUT1), // Buffer inout port (connect directly to top-level port)
	.I(SDA_MASTER), // Buffer input
	.E(SDA_EN1) // 3-state enable input
	);

    IOBUFE sda1 (
	.O(SDA_SLAVE2), // Buffer output
	.IO(SDA_OUT2), // Buffer inout port (connect directly to top-level port)
	.I(SDA_MASTER), // Buffer input
	.E(SDA_EN2) // 3-state enable input
	);

    IOBUFE sda2 (
	.O(SDA_SLAVE3), // Buffer output
	.IO(SDA_OUT3), // Buffer inout port (connect directly to top-level port)
	.I(SDA_MASTER), // Buffer input
	.E(SDA_EN3) // 3-state enable input
	);

    IOBUFE sda3 (
	.O(SDA_SLAVE4), // Buffer output
	.IO(SDA_OUT4), // Buffer inout port (connect directly to top-level port)
	.I(SDA_MASTER), // Buffer input
	.E(SDA_EN4) // 3-state enable input
	);


    
    OBUF #(
        .SLEW("SLOW") // Specify the output slew rate
    ) OBUF_inst1 (
        .O(SCL_OUT1),     // Buffer output (connect directly to top-level port)
        .I(SCL && EN1)      // Buffer input 
    );

    OBUF #(
        .SLEW("SLOW") // Specify the output slew rate
    ) OBUF_inst11 (
        .O(SCL_OUT2),     // Buffer output (connect directly to top-level port)
        .I(SCL && EN2)      // Buffer input 
    );

    OBUF #(
        .SLEW("SLOW") // Specify the output slew rate
    ) OBUF_inst22 (
        .O(SCL_OUT3),     // Buffer output (connect directly to top-level port)
        .I(SCL && EN3)      // Buffer input 
    );

    OBUF #(
        .SLEW("SLOW") // Specify the output slew rate
    ) OBUF_inst33 (
        .O(SCL_OUT4),     // Buffer output (connect directly to top-level port)
        .I(SCL && EN4)      // Buffer input 
    );



     PULLUP PULLUP_pull1 (
     .O(SDA_OUT1) // Pullup output (connect directly to top-level port)
     );
     PULLUP PULLUP_pull2 (
     .O(SDA_OUT2) // Pullup output (connect directly to top-level port)
     );
     PULLUP PULLUP_pull3 (
     .O(SDA_OUT3) // Pullup output (connect directly to top-level port)
     );
     PULLUP PULLUP_pull4 (
     .O(SDA_OUT4) // Pullup output (connect directly to top-level port)
     );



    i2c_master i2c ( 
		.SCL(SCL), 
        .SDA_OUT(SDA_MASTER),
        .SDA_IN(SDA_SLAVE),
		.CLK(CLK), 
		.RES(RES), 
		.start(sensor_n[0]),
		.rw(sensor_n[1]),
        .i2c_end(i2c_end),
		.adr(sensor_n[4:2]),
		.temp_reg_d1(sensor_reg), 
		.temp_output_d2(sensor_data_w), 
        .temp_input(sensor_data_r),
        .SDA_EN(SDA_EN)
	); 

    // i2c_adr = sensor_n[4:2];
    assign SDA_EN1 = (sensor_n[6:5] == 2'b00) ? SDA_EN : 0; 
    assign SDA_EN2 = (sensor_n[6:5] == 2'b01) ? SDA_EN : 0; 
    assign SDA_EN3 = (sensor_n[6:5] == 2'b10) ? SDA_EN : 0; 
    assign SDA_EN4 = (sensor_n[6:5] == 2'b11) ? SDA_EN : 0; 

    assign   EN1 = (sensor_n[6:5] == 2'b00) ? 1  : 0; 
    assign   EN2 = (sensor_n[6:5] == 2'b01) ? 1  : 0; 
    assign   EN3 = (sensor_n[6:5] == 2'b10) ? 1  : 0; 
    assign   EN4 = (sensor_n[6:5] == 2'b11) ? 1  : 0;

    assign SDA_SLAVE = (sensor_n[6:5] == 2'b00) ? SDA_SLAVE1 : 1'bz; 
    assign SDA_SLAVE = (sensor_n[6:5] == 2'b01) ? SDA_SLAVE2 : 1'bz; 
    assign SDA_SLAVE = (sensor_n[6:5] == 2'b10) ? SDA_SLAVE3 : 1'bz; 
    assign SDA_SLAVE = (sensor_n[6:5] == 2'b11) ? SDA_SLAVE4 : 1'bz; 
    //assign SDA_SLAVE = SDA_SLAVE4;
    //assign SDA_EN3 = SDA_EN; 
    // assign SDA = SDA_OUT1 || SDA_OUT2 || SDA_OUT3 || SDA_OUT4 ; 
    

    input [9:0] ADR;
    input BWR, BRD;
    inout [7:0] Data;
    reg [7:0] outDATA;
	assign Data = BRD ? 8'bz : outDATA;
	


    always @(posedge BWR or posedge RES)
		begin
            if(RES)
                begin
                    sensor_n[7:1] <= 7'h00;
                    sensor_reg <= 8'h00;
                    sensor_data_w <= 8'h00;
                
                end
			else if(ADR[9:4] == 6'b00_0101)
				//$display ("hello");
                begin
                    //sensor_reg <= 8'd24;
                    case(ADR[3:0])
                        4'b0000: 
                            begin 
                                sensor_n[7:1] <= Data[7:1];
                            end
                        4'b0001: 
                            begin 
                                sensor_reg <= Data;
                            end
                        4'b0010: 
                            begin 
                                sensor_data_w <= Data;
                            end
                    endcase
                    $display("\n address %b, data %b", ADR , Data);
                end
        end

    wire RES_ST;
    assign RES_ST = RES || i2c_end;

    // assign SDA_OUT1 = (sensor_n[6:5] == 2'b00) ? SDA  : 1'bz; 
    // assign SDA_OUT2 = (sensor_n[6:5] == 2'b01) ? SDA  : 1'bz; 
    // assign SDA_OUT3 = (sensor_n[6:5] == 2'b10) ? SDA  : 1'bz; 
    // assign SDA_OUT4 = (sensor_n[6:5] == 2'b11) ? SDA  : 1'bz; 





always @(posedge BWR or posedge RES_ST)
		begin
			//$display ("hello");
            if(RES_ST)
                sensor_n[0] <= 0;
			else if(ADR == 10'b00_0101_0000)
				begin
                    sensor_n[0] <= Data[0];
                end
        end//
			

	always @*//(posedge ADR or sensor_n or sensor_reg or sensor_data_w or sensor_data_r)//or another register
	//always @(posedge BRD)//or another register
		begin
            //sensor_data_r <= 8'h0F;
			if(ADR[9:4] == 6'b00_0101)
				case(ADR[3:0])
					4'b0000: 
						begin 
							outDATA <= sensor_n;
						end
                    4'b0001: 
						begin 
							outDATA <= sensor_reg;
						end
                    4'b0010: 
						begin 
							outDATA <= sensor_data_w;
						end
                    4'b0011: 
						begin
							outDATA <= sensor_data_r;
						end
				endcase
		end


endmodule
