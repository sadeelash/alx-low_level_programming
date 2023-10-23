/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (s == NULL)
		return (0);

	int len = strlen(s);
	if (len == 0 || len == 1)
		
		return (1);

	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		while (!isalnum(s[start]) && start < end)
			start++;

		while (!isalnum(s[end]) && start < end)
			end--;

		if (tolower(s[start]) != tolower(s[end))
			return (0);

		start++;
		end--;
	}

	return (1);
}

