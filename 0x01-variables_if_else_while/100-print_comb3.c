#include <stdio.h>
/**
 * main - Enrty.
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(',');
			putchar(' ');
			putchar('0' + j);
			putchar('0' + i);
		}
	}
	putchar('\n');
	return (0);
}
