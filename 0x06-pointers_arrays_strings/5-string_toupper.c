#include "main.h"
/**
 *string_toupper - function that changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int los;

	los = 0;

	while (x[los] !=  '\0')
	{
		if (x[los] >= 97 && x[los] < 122)
		{
			x[los] = x[los] - 32;
		}
		los++;
	}
	return (x);
}
