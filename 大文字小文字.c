#include<stdio.h>

int main()
{
	char i;
	
	printf("文字を入力してください");
	scanf_s("%c", &i);

	if ((i >= 'A') && (i <= 'Z')) {
		printf("大文字を含んでいます");
	}
	else {
		printf("大文字を含んでいません");
	}

	return 0;
}