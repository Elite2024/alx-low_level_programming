#include <stdio.h>
/**
 * main - main is the entry point of this code.
 * Description: This code prints alphabets in reverse order.
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
