#include<stdio.h>

int main(void)
{
	int a, result;

	//���������
	printf("Please Enter Number: ");
	scanf_s("%d", &a);

	if (a % 2 == 1)
	{
		printf("%d�͊",a);
	}
	else 
	{
		printf("%d�͋���",a);
	}

	return 0;
}

	
