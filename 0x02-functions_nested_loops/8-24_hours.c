#include "main.h"

/**
  * jack_bauer - print the hours and minutes in 24h system
  */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int a = i / 10;
		int b = i % 10;
		int j;

		for (j = 0; j <= 59; j++)
		{
			int c = j / 10;
			int d = j % 10;

			_putchar('0' + a);
			_putchar('0' + b);
			_putchar('0' + c);
			_putchar('0' + d);
		}
	}
}



