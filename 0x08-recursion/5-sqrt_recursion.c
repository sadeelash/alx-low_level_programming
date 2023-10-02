#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number for which we want to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root or -1 if not found.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_recursive(n, guess + 1)); /* Increment the guess and continue */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which we want to find the square root.
 *
 * Return: The square root or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* If n is negative, return -1 to indicate an error */
		return (-1);

	if (n == 0 || n == 1) /* Base cases: square root of 0 or 1 is itself */
		return (n);

	return (sqrt_recursive(n, 2)); /* Start with a guess of 2 */
}

