#include "main.h"
/**
 * *_strcpy - Copies the strings pointed by src
 * @dest: char type string
 * Description: Copies the string pointed by pointer 'src' to
 * the buffer pointed to by 'dest'
 * @src: This is where the string is pointed to.
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
