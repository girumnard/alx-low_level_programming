#include <stdio.h>
/**
 * main - print all letters except q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);

}
