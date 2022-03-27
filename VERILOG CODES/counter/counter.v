`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:03 03/27/2022 
// Design Name: 
// Module Name:    counter 
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
module counter(out, clk, reset, up);
output [3:0]out;
input clk,reset,up;

reg [3:0]out;
always @(posedge clk)
	begin
	// Count Up
		if(up==1)
			begin
				if(reset)
					out = 4'b0;
				else
					out = out + 1;
			end
			
	// Count Down
		if(up==0)
			begin
				if(reset)
					out = 4'b1111;
				else
					out = out - 1;
			end
	end
endmodule
