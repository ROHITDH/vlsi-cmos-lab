`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:51 03/27/2022 
// Design Name: 
// Module Name:    adder_tb 
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
module adder_tb();
reg [3:0]a,b;
reg cin;

wire [3:0]sum;
wire cout;

integer i,j;

adder uut(sum,cout,a,b,cin);
initial
	begin
		cin = 1'b0;
		for(i=0;i<16;i=i+1)
			begin
				for(j=0;j<16;j=j+1)
					begin
						a = i;
						b = j;
						#10 ;
					end
			end
	end

endmodule
