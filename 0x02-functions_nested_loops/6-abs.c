#include "main.h"
#include <stdio.h>
/**
 *  _abs - function that computes absolute value of integer
 *   @c: is the int for argument
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
