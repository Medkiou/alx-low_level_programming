#include "main.h"

/**
 * _sqrt_helper - helper function for calculating natural square root
 * @n: the number to find the natural square root of
 * @low: the lower bound of the binary search range
 * @high: the upper bound of the binary search range
 *
 * Return: the natural square root of n if it exists, otherwise -1
 */
int _sqrt_helper(int n, int low, int high)
{
    int mid, mid_squared;

    /* Base case: n has a natural square root */
    if (low > high)
        return (-1);

    mid = (low + high) / 2;
    mid_squared = mid * mid;

    if (mid_squared == n)
        return (mid);
    else if (mid_squared < n)
        return (_sqrt_helper(n, mid + 1, high));
    else
        return (_sqrt_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the natural square root of
 *
 * Return: the natural square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (_sqrt_helper(n, 0, n));
}
