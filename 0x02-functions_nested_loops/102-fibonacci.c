#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers separated by commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count;

	printf("%ld, %ld", a, b);

	for (count = 2; count < 50; count++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}

