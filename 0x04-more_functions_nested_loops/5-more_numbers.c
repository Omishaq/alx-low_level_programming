#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; j++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
