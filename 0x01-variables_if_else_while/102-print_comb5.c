#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: 0 (Success)
 */
int main(void)
{
        int a, b, c , d;
	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			for (c = a; c < 58; c++)
			{
				for (d = b+1; d < 58; d++)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
