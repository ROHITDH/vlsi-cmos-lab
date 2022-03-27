`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:19 03/27/2022 
// Design Name: 
// Module Name:    counter_tb 
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
module counter_tb();

reg clk,reset,up;
wire [3:0]out;

counter uut(out, clk, reset, up);
initial
	begin
		clk = 1'b0;
		forever #5 clk=~clk;
	end
	
initial
	begin
		up = 1'b0;reset = 1'b0;
		#40 reset = 1'b1;
		#10 reset = 1'b0;
		
		#20 up = 1'b1;
	end

endmodule
