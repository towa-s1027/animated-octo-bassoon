#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	srand(time(0));
	int i, s, c;
	i = (rand() % 20) + 1;
	s = (rand() % (20 - i)) + 1;
	c = 20 - i - s;
	if (i > s && i > c)
	{
		printf("���Ȃ��͖��@�g���n�umage�v�ł�\n");
	}
	if (s > i && s > c)
	{
		printf("���Ȃ��̓t�@�C�^�[�n�uknight�v�ł�\n");
	}
	if (c > i && c > s)
	{
		printf("���Ȃ��͓��l�n�uthief�v�ł�\n");
	}
	if (i == s && i > c)
	{
		printf("���Ȃ��͖��@�g���n���t�@�C�^�[�n�umage and knight�v�ł�\n");
	}
	if (s == c && s > i)
	{
		printf("���Ȃ��̓t�@�C�^�[�n�����l�n�uknight and theif�v�ł�\n");
	}
	if (i == c && i > s)
	{
		printf("���Ȃ��͖��@�g���n�����l�n�umage and thief�v�ł�\n");
	}
	printf("inteligence:%d,stamina:%d,charisma:%d", i, s, c);
	return 0;	
}
