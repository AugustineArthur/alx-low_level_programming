#include <stdio.h>
/**
 * main - Entry point
 *
 *  Description: Use `putchar` function to print the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n)';

return (0);
}
