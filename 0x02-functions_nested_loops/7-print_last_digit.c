#include "main.h"

/**
 * -print last digit - function that prints the last digit of a number
 *
 * @a: the int to extract the last digit from
 *Return: value of the last digit
 */

int print_last_digit(int a)
{
	int n;

	if (a < 0)
	a = -a;
	n = a % 10;
	if (n < 0)
	n = -n;
	_putchar(n + '0');
	return (n);
}
