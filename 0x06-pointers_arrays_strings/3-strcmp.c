#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: value less than 0 if string is less than the other,
 * value greater than 0 if string is greater than the other
 * & 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int c, cv;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}
	cv = s1[c] - s2[c];
	return (cv);
}
