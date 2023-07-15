#include <stdio.h>
/**
 * main - Program's starting point.
 * Return: Always 0 (success).
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0');
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
