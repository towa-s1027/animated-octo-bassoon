#include<stdio.h>

int main()
{
	char i;
	
	printf("��������͂��Ă�������");
	scanf_s("%c", &i);

	if ((i >= 'A') && (i <= 'Z')) {
		printf("�啶�����܂�ł��܂�");
	}
	else {
		printf("�啶�����܂�ł��܂���");
	}

	return 0;
}