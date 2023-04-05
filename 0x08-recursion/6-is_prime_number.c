#include "main.h"
#include <math.h>

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0; // 1 and all negative numbers are not prime
    }
    if (n == 2)
    {
        return 1; // 2 is prime
    }
    if (n % 2 == 0)
    {
        return 0; // all even numbers (except 2) are not prime
    }
    return is_prime_number_help(n, 3); // start checking odd divisors from 3
}

int is_prime_number_help(int n, int divisor)
{
    if (divisor > sqrt(n))
    {
        return 1;
    }
    if (n % divisor == 0)
    {
        return 0;
    }
    return is_prime_number_helper(n, divisor + 2);
}
