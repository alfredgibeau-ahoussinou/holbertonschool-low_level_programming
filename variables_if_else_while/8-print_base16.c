#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{

	char nombre;
	char lettre;

	for (nombre = '0' ; nombre <= '9' ; nombre++)
		putchar(nombre);
	for (lettre = 'a'; lettre <= 'f'; lettre++)
		putchar(lettre);
	putchar('\n');
	return (0);
}
