#include<stdio.h>

int main(void)
{
	int a, result;

	//���������
	printf("Please Enter Number: ");
	scanf_s("%d", &a);

	//�Q����v�Z
	result = a * a;

	printf(" %d * %d =%d", a,a, result);

	return 0;
}

