#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source of string pointer.
 *
 * Return: pointer to destination of string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int los, z;
/* z is a counter for n bytes of src to be concatenated */
/* los = length of destination string */

	los = 0;
	while (dest[los] != '\0')
	{
		los++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, los++)
	{
		dest[los] = src[z];
	}
	dest[los] = '\0';
	return (dest);
}
