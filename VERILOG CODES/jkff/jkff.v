`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:26 03/27/2022 
// Design Name: 
// Module Name:    jkff 
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
module jkff(q,qb,jk,clk,rst);
output q,qb;
input [1:0]jk;
input clk,rst;
reg q,qb;

always @(posedge clk)
	begin
		if(rst)
			q = 1'b0;
		else
			case(jk)
				2'b00: q = q;
				2'b01: q = 0;
				2'b10: q = 1;
				2'b11: q = ~q;
				default: q = 1'b0;
			endcase
		qb = ~q;
	end

endmodule
