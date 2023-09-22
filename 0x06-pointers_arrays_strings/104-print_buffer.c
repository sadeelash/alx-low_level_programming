#include <stdio.h>

void print_buffer(char *b, int size);

int main(void)
{
    char buffer[98] = "0 1 2 3 4 5 6 7 8 9 a b c d e f \
                     0123456789abcdef\
                     000000000011111111112222222222333333333344444444445555555555\
                     0123456789012345678901234567890123456789012345678901234567890123456789";
    char buffer2[98] = "0a1b2c3d4e5f\
                     0123456789abcdef\
                     000000000011111111112222222222333333333344444444445555555555\
                     0123456789012345678901234567890123456789012345678901234567890123456789";

    printf("Buffer 1:\n");
    print_buffer(buffer, 98);
    printf("\nBuffer 2:\n");
    print_buffer(buffer2, 98);

    return (0);
}

