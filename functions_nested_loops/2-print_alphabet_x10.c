#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 prints 10 times the alphabet, in lowercase followed by a new line.
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
