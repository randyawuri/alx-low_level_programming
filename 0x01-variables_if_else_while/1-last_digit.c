#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry.
 * Return: always 0 (success).
*/
int main(void)
{
	int n;
	int last_digit_of_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_of_n = n % 10;

	if (last_digit_of_n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", last_digit_of_n);
	}
	else if (last_digit_of_n == 0)
	{
		printf("Last digit of n is %d  and is 0\n", last_digit_of_n);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", last_digit_of_n);
	}
	return (0);
}
