#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: Input
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factoriel(n - 1));
}
