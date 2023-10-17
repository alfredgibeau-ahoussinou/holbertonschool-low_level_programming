#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{

	int nombre;

	for (nombre = '0' ; nombre <= '9' ; nombre++)
	if (nombre < 9)

	putchar(',');
	putchar(' ');

	putchar('\n');
	return (0);
}
