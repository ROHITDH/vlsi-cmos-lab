`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:11 03/27/2022 
// Design Name: 
// Module Name:    srff 
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
module srff(q,qb,sr,clk,rst);
output q,qb;
input [1:0]sr;
input clk,rst;
reg q,qb;

always @(posedge clk)
	begin
		if(rst)
			q = 1'b0;
		else
			case(sr)
				2'b00: q = q;
				2'b01: q = 0;
				2'b10: q = 1;
				2'b11: q = 1'bz;
				default: q = 1'b0;
			endcase
		qb = ~q;
	end

endmodule
