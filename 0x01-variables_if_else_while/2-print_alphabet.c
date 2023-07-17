#include <stdio.h>
/**
 * main - This is the entry point of the program.
 * Description: This program prints lower case alphabets.
 * Return: Always  (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghiklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
