#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in lower case
 * and in uppercase, follow by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
