#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*calc_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    calc_func = get_op_func(argv[2]);

    if (calc_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    result = calc_func(num1, num2);
    printf("%d\n", result);

    return (0);
}

