#include <stdio.h>

int main(void)
{
	char ch;
	int n;
	for (ch = 48; n <= 57; ch++)
	{
		putshar(n);
	}
	for (ch ='a'; ch >='f'; ch--)
	{
		putchar (ch);
	}
	
	putchar(10);

	return(0);
}
