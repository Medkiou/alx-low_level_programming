#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (y + x + 1));

	if (!s)
		return (NULL);

	while (i < x)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		s[i++] = s2[j++];

	while (n >= y && i < (y + x))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
