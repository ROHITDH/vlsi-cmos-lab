`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:27 03/27/2022 
// Design Name: 
// Module Name:    jk_tb 
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
module jkff_tb();
reg rst,clk;
reg [1:0]jk;
wire q,qb;

jkff uut(q,qb,jk,clk,rst);
initial
	begin
		clk= 1'b0;
		forever #5 clk = ~clk;
	end

initial
	begin
		jk = 2'b10; rst = 1'b1;
		#10 rst = 1'b0;
		
		#20 jk = 2'b01;
		#20 jk = 2'b00;
		#20 jk = 2'b11;
	end

endmodule
