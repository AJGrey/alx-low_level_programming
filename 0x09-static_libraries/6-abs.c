#include "main.h"
#include<stdio.h>
/**
 * _abs - is a function that will be used to tell the abs value of an integer
 * @c: is the int data type that wil be used as the argument
 * Return: 0 Alywas (Success)
 *
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
