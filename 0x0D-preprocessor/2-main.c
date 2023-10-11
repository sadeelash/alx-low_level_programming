#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the name of the source file.
 * It uses the predefined macro __FILE__ to obtain the file name.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

