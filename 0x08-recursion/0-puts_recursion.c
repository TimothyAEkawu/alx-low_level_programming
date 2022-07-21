

#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: pointer to the first character of the string
 * Return: void or nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
