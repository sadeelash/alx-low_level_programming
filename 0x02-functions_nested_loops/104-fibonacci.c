#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by a comma
 * and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first = 1, second = 2, next, sum;

	printf("%lu, %lu", first, second);

	for (int i = 3; i <= 98; i++)
	{
		next = first + second;
		sum = next;
		printf(", %lu", next);

		first = second;
		second = sum;
	}

	printf("\n");

	return (0);
}

