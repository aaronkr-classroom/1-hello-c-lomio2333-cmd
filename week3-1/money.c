//money.c
#include<stdio.h>

int main(void) {
	int won;
	won = 100000;
	printf("�� ���࿡ %d\\ �ֽ��ϴ�\n", won);

	//��ǥ �ִ� ��
	const char* easy_won = "10000000";
	printf("�� ���࿡�� %d\\ �ֽ��ϴ�\n", easy_won);

	printf("+500000\\ ����~\n");
	easy_won = "10500000";//???
	printf("�����ؼ� ���� %s\\�ֽ��ϴ�\n", easy_won);

	//bitcoin

	float bc = 10.123456789;
	printf("Bitcoin ���� :%.fBC\n",bc);//bc
	
	bc = bc + 0.34567;
	printf("���� Bitcoin ���� :%.fBC\n", bc);//bc

	//10.469126789





		return 0;
}