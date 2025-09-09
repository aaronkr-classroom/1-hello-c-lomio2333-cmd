//nums.c
#include<stdio.h>
#include<limits.h> //최대 값/최소 값 볼 때

int main(void) {
	// char					1바이트	(문자)
	char ch = 'A';
	printf("char:\n");
	printf("value:%c\n",ch);
	printf("max:%d\n",CHAR_MAX); //limit.h의 상수
	printf("min:%d\n",CHAR_MIN); 

	// signed short int		2바이트	(정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("value:%d\n", sshort);
	printf("max:%d\n", SHRT_MAX); //limit.h의 상수
	printf("min:%d\n", SHRT_MIN);

	//unsigned short int	2바이트	(정수)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("value:%d\n", ushort);
	printf("max:%d\n", USHRT_MAX); //limit.h의 상수
	
	//signed int			4바이트	(정수)
	signed  int sint = 12345;
	printf("\nsigned int:\n");
	printf("value:%d\n", sint);
	printf("max:%d\n", INT_MAX); //limit.h의 상수
	printf("min:%d\n", INT_MIN);

	//unsigned int			4바이트	(정수)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("value:%d\n", uint);
	printf("max:%d\n", UINT_MAX); //limit.h의 상수

	//long은 다른 운영체제에서 다른 바이트 크기입니다.
	//보통 4바이트인데 Linux/Unix/Mac에서 8바이트입니다.
	//Windows에서 long long 하면 8바이트 사용할 수 있다.
	
	//signed long int		4바이트	(정수)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("value:%d\n", slong);
	printf("max:%d\n", LONG_MAX); //limit.h의 상수
	printf("min:%d\n", LONG_MIN);

	//unsigned long int		4바이트	(정수)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("value:%d\n", ulong);
	printf("max:%d\n", ULONG_MAX); //limit.h의 상수

	//float	(항상 부호 있다)4바이트	(실수)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("value:%f\n", f);
	//printf("max:%d\n", FLT_MAX); //limit.h의 상수
	//printf("min:%d\n", FLT_MIN);



	//double(항상 부호 있다)8바이트	(실수)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("value:%.3f\n", d);
	//printf("max:%d\n", DBL_MAX); //limit.h의 상수
	//printf("min:%d\n", DBL_MIN);

	return 0;

}
)