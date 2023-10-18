#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int nombre;

	for (nombre = 0 ; nombre <= 9 ; nombre++)
	{
	putchar('0' + nombre);

	if (nombre <= 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
