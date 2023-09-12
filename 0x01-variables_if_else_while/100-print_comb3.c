#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by , followed by a space.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int firstDigit, secondDigit;
    int isCommaNeeded = 0; // Flag to determine if a comma is needed

    for (firstDigit = 0; firstDigit <= 9; firstDigit++)
    {
        for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
        {
            if (isCommaNeeded)
            {
                putchar(',');
                putchar(' ');
            }

            putchar(firstDigit + '0'); // Convert to character
            putchar(secondDigit + '0'); // Convert to character

            isCommaNeeded = 1; // Set the flag for the next iteration
        }
    }

    putchar('\n');

    return (0);
}
