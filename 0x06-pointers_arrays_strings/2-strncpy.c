/**
 * _strncpy - Copies at most n bytes of the source string to the destination
 * @dest: The destination string
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
