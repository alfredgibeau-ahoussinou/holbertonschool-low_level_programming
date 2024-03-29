#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes each word in a string.
 * @s: a pointer point to a string
 *
 * Return: return a pointer that point to the changed string.
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		i++;
	}
	return (s);
}
