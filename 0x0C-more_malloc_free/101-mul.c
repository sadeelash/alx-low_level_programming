#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str);
int _strlen(char *str);
void multiply(char *num1, char *num2, char *result);

/**
 * is_digit - Check if a string is a valid number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - Compute the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}

/**
 * multiply - Multiply two numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @result: Pointer to store the result.
 */
void multiply(char *num1, char *num2, char *result)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int carry = 0;

	for (int i = len1 - 1; i >= 0; i--)
	{
		int n1 = num1[i] - '0';

		carry = 0;

		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int mul = n1 * n2;
			int sum = result[i + j + 1] - '0' + mul + carry;

			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}

		if (carry > 0)
			result[i] = (carry % 10) + '0';
	}
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 98 if an error occurs.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	char *result = calloc(len + 1, sizeof(char));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	multiply(num1, num2, result);

	if (result[0] == '0')
		result++;

	printf("%s\n", result);
	free(result);
	return (0);
}

