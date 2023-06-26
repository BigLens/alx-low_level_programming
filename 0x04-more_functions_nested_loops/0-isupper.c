#include "main.h"
/**
 * _isupper - checking for an uppercase letter
 *@c: input characters
 * Return: 1 if it's an uppercase letter, return 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
