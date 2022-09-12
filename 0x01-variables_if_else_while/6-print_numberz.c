#include <stdio.h>

/**
 * main - prints all the single digit numbers of base 10 starting from 0,
 *	only using putchar without char varibles
 *
 *	Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		putchar(num % 10);

	putchar('\n');

	return (0);
}
