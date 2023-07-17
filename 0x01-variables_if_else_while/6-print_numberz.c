#include <stdio.h>
/**
 * main - main is the entry point of this program.
 * Description: this program prints all digits.
 * Return: 0 (success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
