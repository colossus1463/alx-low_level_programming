#include "main.h"
/**
 *_isalpha - function to find alphabetic character
 *
 *  Return: always 0
 */
int _isalpha(int c)
{
	for (c = 'a'; c = 'z', c++)
	{
		for (c = 'A'; c = 'Z', c++)
		{
			return (1);
		}
	}
			else
				return (0);
}
