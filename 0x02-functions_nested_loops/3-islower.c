#include "main.h"
/**
 * _islower - function to check for lower case character
 * @c: is the int that is used as argument
 * Return: Always 0
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
