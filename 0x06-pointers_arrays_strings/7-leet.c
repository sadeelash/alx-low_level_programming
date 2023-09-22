/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacement[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j])
				str[i] = leet_replacement[j];
		}
	}
	return (str);
}

