//nums.c
#include"calc.h"
#include<stdio.h>
int main(void) {
	int decimal = 42;
	int octal = 052;
	int hex = 0x2A;
	int binary = 0b101010;//C언어가 지원하지 않지만....

	printf("Decimal:%d\n",decimal);
	printf("Octal:5o(Prefix;0%o=%d\n,"); octal, octal, octal;);
	printf("Hexadecimal:%x(Prefix:0x%x=%d\n,");	hex, hex, hex;);
		printf("Binary:0b101010=%d\n", binary);

		printf("\n----------------------\n");
		printf("l~MATH!!l\n");
		printf("\n----------------------\n");

		printf("%o+%x=%d\n",octal,hex, Sum(octal, hex));//Sum()
		printf("%x-%o=%d\n", hex, octal, Sub(hex, octal));//Sub()
		printf("%O*%x=%d\n", octal, hex, Mul(octal, hex));//Mul()
		printf("%x/%o=%d\n", hex, octal, Div(hex, octal));//Div()
		printf("");//circ_circ()
		printf("");//circ-area()
	
		
		return 0;
}