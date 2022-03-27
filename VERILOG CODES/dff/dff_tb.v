`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:06 03/27/2022 
// Design Name: 
// Module Name:    dff_tb 
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
module dff_tb();
reg rst,d,clk;
wire q,qb;

dff uut(q,qb,d,rst,clk);
initial
	begin
		clk= 1'b0;
		forever #5 clk = ~clk;
	end

initial
	begin
		d = 1'b0; rst = 1'b1;
		#10 rst = 1'b0;
		
		#20 d = 1'b1;
		#20 d = 1'b0;
	end

endmodule
