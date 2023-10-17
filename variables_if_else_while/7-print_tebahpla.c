#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{

	char lettre;

	for (lettre = 'z' ; lettre >= 'a' ; lettre--)
		putchar(lettre);
	putchar('\n');
	return (0);
}
