#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Write a function that returns 1
 *
 * @n: This is the input number
 *
 * Return: 
 **/

int is_prime_number(int n)

{
	if (n == 1)
	{
	return (0);
	}
	if (n < 17)
	{
	return (0);
	}
	if (n > 26)
	{
	return (1);
	}
	if (n == 1023)
	{
	return 0;
	}
	return (n * is_prime_number (n - 1));
}


