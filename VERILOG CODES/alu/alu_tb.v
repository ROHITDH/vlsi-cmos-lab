`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:02:33 03/27/2022 
// Design Name: 
// Module Name:    alu_tb 
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
module alu_tb();
reg [2:0]opcode;
reg [31:0]a,b;
reg en;

wire [31:0]result;


alu uut(result,a,b,opcode,en);
initial
	begin
		en = 1'b0; opcode = 3'b000;
		#10 en = 1'b1;
		a = 32'd4; b = 32'd2;
		opcode = 3'b000;
		#10 opcode = 3'b001;
	end

endmodule
