#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: destination string pointer.
 * @src: source of string pointer.
 *
 * Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cob;

	for (cob = 0; cob < n && src[cob] != '\0'; cob++)
	dest[cob] = src[cob];

	for (; cob < n; cob++)
	dest[cob] = '\0';

	return (dest);
}
