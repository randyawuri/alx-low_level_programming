#include <stdio.h>
/**
 * main - Entry.
 * Return: Always 0 (success).
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
			for (k = 0; k < j; k++)
			{
				putchar('0' + k);
				putchar('0' + j);
				putchar('0' + i);
				if (i != 9 || j != 8 || k != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
