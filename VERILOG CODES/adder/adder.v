`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:00 03/27/2022 
// Design Name: 
// Module Name:    adder 
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
module adder(sum,cout,a,b,cin);
	output [3:0]sum;
	output cout;

	input [3:0]a,b;
	input cin;

	wire [2:0]ca;

	full_adder f1(a[0],b[0],cin,sum[0],ca[0]);
	full_adder f2(a[1],b[1],ca[0],sum[1],ca[1]);
	full_adder f3(a[2],b[2],ca[1],sum[2],ca[2]);
	full_adder f4(a[3],b[3],ca[2],sum[3],cout);
endmodule


module full_adder(a,b,cin,sum,carry);
	output carry,sum;
	input a,b,cin;
	
	//assign {carry,sum} = a+b+cin;
   assign sum = a ^ b ^ cin;
	assign carry = (a&b) | (b&cin) | (cin&a);
endmodule







