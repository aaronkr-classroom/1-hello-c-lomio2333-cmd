#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int main()
	{
		int both;
		int b;

		printf("출생연도 : ");
		scanf("%d", &both);

		printf("2002년도 당시 나이는 %d입니다.", 2002-both+1);

		return 0;
	}