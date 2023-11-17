#include<stdio.h>

int main()
{
	char i;
	
	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%c", &i);

	if ((i >= 'A') && (i <= 'Z')) {
		printf("‘å•¶Žš‚ðŠÜ‚ñ‚Å‚¢‚Ü‚·");
	}
	else {
		printf("‘å•¶Žš‚ðŠÜ‚ñ‚Å‚¢‚Ü‚¹‚ñ");
	}

	return 0;
}