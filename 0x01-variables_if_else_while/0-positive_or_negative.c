#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the no  stored in the variable n is - or +.
 * Return: 0
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
	{
		puts(" is positive");
	}
	else if (n == 0)
	{
		puts(" is zero");
	}
	else
	{
		puts(" is negative");
	}

	return (0);
}
