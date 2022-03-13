#include <stdio.h>
/**
 * main - print the numbers of base 16 in lower case,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
