#include <stdio.h>
/**
 * main - program entry point
 * Return: always 0 (success)
*/
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
