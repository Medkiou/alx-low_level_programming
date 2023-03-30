#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
