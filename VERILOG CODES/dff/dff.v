`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:47 03/27/2022 
// Design Name: 
// Module Name:    dff 
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
module dff(q,qb,d,rst,clk);
output q,qb;
input rst,d,clk;

reg q,qb;
always @(posedge clk)
	begin
		if(rst)
			q = 1'b0;
		else
			q = d;
		qb = ~q;
	end
endmodule
