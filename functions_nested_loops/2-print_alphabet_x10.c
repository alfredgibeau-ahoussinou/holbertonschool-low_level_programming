#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10- entry point
 *
 * Return: 0 (if success)
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	int lettre;
		while (counter++ <= 9)

	{
		for (lettre = 'a' ; lettre <= 'z' ; lettre++)
			putchar(lettre);
	putchar(10);
	}
}
