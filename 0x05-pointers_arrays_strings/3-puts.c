#include <stdio.h>
#include "main.h"

/**
 * _puts - fucntion that printd a string, follwed by a new line, to stdout
 * @str: pointer value
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
