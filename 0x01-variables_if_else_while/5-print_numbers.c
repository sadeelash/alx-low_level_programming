#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0.
 * Return: 0
**/

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
