#include "main.h"
/** 
 * print_sign - function to check for sign of number
 * @n: is the int argument
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0')		return (0);
	}
}
