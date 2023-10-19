#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

void print_alphabet(void)
{

	int lettre;
	
	for (lettre = 'a' ; lettre <= 'z' ; lettre++)
	{
		putchar(lettre);
		putchar('\n');
	}
}
