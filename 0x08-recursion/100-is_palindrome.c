/**
 * _strlen_recursion - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return _is_palindrome(s, start + 1, end - 1);
}

/**
 * is_palindrome - Main function to check if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return _is_palindrome(s, 0, length - 1);
}

