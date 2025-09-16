//money.c
#include<stdio.h>

int main(void) {
	int won;
	won = 100000;
	printf("제 은행에 %d\\ 있습니다\n", won);

	//쉼표 있는 것
	const char* easy_won = "10000000";
	printf("제 은행에서 %d\\ 있습니다\n", easy_won);

	printf("+500000\\ 수금~\n");
	easy_won = "10500000";//???
	printf("수금해서 지금 %s\\있습니다\n", easy_won);

	//bitcoin

	float bc = 10.123456789;
	printf("Bitcoin 지갑 :%.fBC\n",bc);//bc
	
	bc = bc + 0.34567;
	printf("현재 Bitcoin 지갑 :%.fBC\n", bc);//bc

	//10.469126789





		return 0;
}