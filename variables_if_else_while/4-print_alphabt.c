#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{

	char lettre = 'a';

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		if (lettre != 'q' && lettre != 'e')
			putchar(lettre);

	putchar('\n');
	return (0);
}
