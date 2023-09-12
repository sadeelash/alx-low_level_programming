#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse the a new line.
 * Return: 0
**/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
