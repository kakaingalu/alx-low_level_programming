#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the character to return
 * @y: the power to which x is raised.
 *
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0 || x == 1 || y == 0)
	{	
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
