#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char alp[24] = "abcdfghijklmnoprstuvwxyz";
int i = 0;
while (i < 24)
{
putchar(alp[i]);
i++; }
putchar('\n');
return (0);
}
