#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array of integers
 *@a: array to print
 *@n: number of elements in n
**/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}
