`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:36:54 03/27/2022 
// Design Name: 
// Module Name:    srff_tb 
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
module srff_tb();
reg rst,clk;
reg [1:0]sr;
wire q,qb;

srff uut(q,qb,sr,clk,rst);
initial
	begin
		clk= 1'b0;
		forever #5 clk = ~clk;
	end

initial
	begin
		sr = 2'b10; rst = 1'b1;
		#10 rst = 1'b0;
		
		#20 sr = 2'b01;
		#20 sr = 2'b00;
	end

endmodule

