#include "main.h"

/**
 * more_numbers - print x10 the numbers from 0 to 14
 */

void more_numbers(void)
{
	int count = 0;
	char n;
	while (count++ <= 9)
	{
		for (n = '0'; n <= '14'; n++)
		_putchar(n);
		_putchar('\n');
	}
}
