#include "main.h"

/**
 * is_prime_recursive - Help check prime number
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1) /* Numbers less than or equal to 1 are not prime */
		return (0);

	if (divisor > n / 2) /* Base case: no divisor found, n is prime */
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1)); /* Check the next divisor */
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime numbers */
		return (0);

	return (is_prime_recursive(n, 2)); /* Start checking divisors from 2 */
}

