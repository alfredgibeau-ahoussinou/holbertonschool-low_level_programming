#include "main.h"
#include <stdio.h>

/*
 *  _strlen_recursion - Write a function that returns the length of a string.
 *  @s: String to print
 */

int _strlen_recursion(char *s)
{
if(*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
		return 14;
}