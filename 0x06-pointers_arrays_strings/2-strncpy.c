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
    char *ptrDest = dest;

    while (*src && n > 0)
    {
        *ptrDest = *src;
        ptrDest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *ptrDest = '\0';
        ptrDest++;
        n--;
    }

    return dest;
}

