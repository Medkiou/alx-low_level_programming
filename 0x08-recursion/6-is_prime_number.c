#include "main.h"
#include <math.h>

/**
 * is_prime_helper - helper function for checking if a number is prime
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    /* Base case: n is divisible by i */
    if (n % i == 0)
        return (0);
    /* Base case: all divisors have been checked */
    if (i == 2)
        return (1);
    /* Recursive case: check next divisor */
    return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Base case: n is less than or equal to 1 */
    if (n <= 1)
        return (0);
    /* Base case: n is 2 or 3 */
    if (n <= 3)
        return (1);
    /* Base case: n is divisible by 2 or 3 */
    if (n % 2 == 0 || n % 3 == 0)
        return (0);
    /* Recursive case: check if n is divisible by odd numbers */
    return (is_prime_helper(n, (int)sqrt(n)));
}
