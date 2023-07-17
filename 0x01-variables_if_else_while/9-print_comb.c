#include <stdio.h>
/**
 * main - main is the entry point of this program.
 * Description: this code prints all possible combinations of
 *		single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
