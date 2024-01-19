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
		printf("あなたは魔法使い系「mage」です\n");
	}
	if (s > i && s > c)
	{
		printf("あなたはファイター系「knight」です\n");
	}
	if (c > i && c > s)
	{
		printf("あなたは盗人系「thief」です\n");
	}
	if (i == s && i > c)
	{
		printf("あなたは魔法使い系かつファイター系「mage and knight」です\n");
	}
	if (s == c && s > i)
	{
		printf("あなたはファイター系かつ盗人系「knight and theif」です\n");
	}
	if (i == c && i > s)
	{
		printf("あなたは魔法使い系かつ盗人系「mage and thief」です\n");
	}
	printf("inteligence:%d,stamina:%d,charisma:%d", i, s, c);
	return 0;	
}
