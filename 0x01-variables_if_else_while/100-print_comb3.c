#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;
while(i < 58)
{
	while(j < 58)
	{
		if(i < j)
		{
			putchar(i);
			putchar(j);
		}
		if(i != 58 || j != 58)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
i++;
}
putchar('\n');
	return (0);
}
