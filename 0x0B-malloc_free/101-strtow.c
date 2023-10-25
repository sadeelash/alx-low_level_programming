#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, in_word;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0, word_count = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, word_count = 0, in_word = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (in_word == 0)
			{
				in_word = 1;
				j = i;
			}
		}
		else if (in_word == 1)
		{
			in_word = 0;
			words[word_count] = (char *)malloc(i - j + 1);
			if (words[word_count] == NULL)
			{
				while (word_count >= 0)
					free(words[word_count--]);
				free(words);
				return (NULL);
			}
			for (k = 0; j < i; k++, j++)
				words[word_count][k] = str[j];
			words[word_count++][k] = '\0';
		}
	}

	if (in_word == 1)
	{
		words[word_count] = (char *)malloc(i - j + 1);
		if (words[word_count] == NULL)
		{
			while (word_count >= 0)
				free(words[word_count--]);
			free(words);
			return (NULL);
		}
		for (k = 0; j < i; k++, j++)
			words[word_count][k] = str[j];
		words[word_count][k] = '\0';
	}

	words[word_count] = NULL;
	return (words);
}

