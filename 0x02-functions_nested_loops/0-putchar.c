#include "main.h"

/**
  * main - entry point to the program
i  *
  * Return: On success 1
  */
int main(void)
{
	char mychar[] = "_putchar\n";
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(mychar[n]);
	}
	return (1);
}
