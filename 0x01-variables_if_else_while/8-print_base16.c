#include <stdio.h>
/**
 * main - main is the entry point of this program.
 * Description: This code will print all numbers of base 16 in lower case.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
		putchar('0' + i);
		}
		else
		{
		putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
