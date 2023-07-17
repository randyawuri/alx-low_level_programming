#include <stdio.h>
/**
 * main - Enrty.
 * Return: Always 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
		putchar('0' + j);
		putchar('0' + i);
		if (i != 9 || j != i - 1)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
