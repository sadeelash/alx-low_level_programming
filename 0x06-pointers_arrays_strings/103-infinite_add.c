#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main(void)
{
    char r[100];
    char *res;

    res = infinite_add("1234567890", "9876543210", r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s\n", res);
    }

    res = infinite_add("999999999", "1", r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s\n", res);
    }

    res = infinite_add("123", "999999999", r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s\n", res);
    }

    res = infinite_add("000000000", "000", r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s\n", res);
    }

    return (0);
}

