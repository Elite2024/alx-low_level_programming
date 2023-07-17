#include <stdio.h>
/**
 * main - This is the entry point of the program.
 * Description: This program prints some alphabets.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char alp[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
