#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{

	char lettre = 'a';

	for (lettre = 'a' ; lettre <= 'z' ; lettre++)
		putchar(lettre);

	lettre = 'A';
	for (lettre = 'A' ; lettre <= 'Z' ; lettre++)
		putchar(lettre);

	putchar('\n');
return (0);
}
