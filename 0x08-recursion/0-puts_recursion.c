#include "main.h"
/**
 * _put_recursion - using the recursion a string is printed followed by a new line
 * @s: pointer to a string
 * Return: nothing
 * */

void _puts_recursion(char *s)
{
	if(*s =='\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
