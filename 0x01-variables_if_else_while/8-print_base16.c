#include <stdio.h>
/**
 * main - Program that prints all the numbers of base sixteen
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
