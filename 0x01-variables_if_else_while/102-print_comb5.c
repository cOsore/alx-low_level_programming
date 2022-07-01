#include <stdio.h>

int main(void)
{
	int ch;
	int n;
	for(ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
			{
				putchar(ch);
				putchar(32);
				if (ch != 57 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}

	}
	putchar(10);
	return(0);

}
