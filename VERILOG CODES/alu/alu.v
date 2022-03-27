`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:51:42 03/27/2022 
// Design Name: 
// Module Name:    alu 
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
module alu(result,a,b,opcode,en);
	output [31:0]result;

	input [2:0]opcode;
	input [31:0]a,b;
	input en;

	reg[31:0]result;
	always @(a,b,opcode,en)
		begin
			if(en==1)
				begin
					case(opcode)
					3'b000 : result = a + b;
					3'b001 : result = a - b;
					3'b010 : result = a + 1;
					3'b011 : result = a - 1;
					
					3'b100 : result = a;
					3'b101 : result = ~a;
					3'b110 : result = a & b;
					3'b111 : result = a | b;
					
					default: result = 32'b0;
					endcase
				end
			else
				result = 32'bz;
		end

endmodule
