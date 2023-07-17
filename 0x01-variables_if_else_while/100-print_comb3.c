#include <stdio.h>
/**
 * main - main is the entry pont of this programn.
 * Description: This code prints all possible different combinations
 *		of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; m++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (m != 56 || m != 57)
				{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
