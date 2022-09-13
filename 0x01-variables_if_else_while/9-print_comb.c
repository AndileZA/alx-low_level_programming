#include <stdio.h>

/**
 * main - prints all the possible combinations of sigle digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			countinue;

		putchar(',');
		putchar(' ');
	}
	
	putchar('\n');

	return (0);
}
