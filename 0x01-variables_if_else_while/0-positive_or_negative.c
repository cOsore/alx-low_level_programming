#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/*
 *main > assigns a random number to the variable n each rithe it is executed and *prints out based on a condition 
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	ptintf("%d is negative\n", n);
}
return (0);
}
