#include "main.h"
#include <stdio.h>
/**
 *void swap_int - Write a function that swaps the values of two integers.
 *@a: a
 *@b: b
 *Return: Nothing
 */


	void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
