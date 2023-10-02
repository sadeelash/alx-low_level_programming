#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: if we reach the end of the string */
	{
		putchar('\n'); /* Print a newline character */
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

