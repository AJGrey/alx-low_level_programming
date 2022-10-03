#include "main.h"
/**
 * _islower - a function to check for lower character
 * @c: this is the int type that will be used for the argument of the function
 * Return: 0 Always
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
