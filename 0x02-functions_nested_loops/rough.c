#include "main.h"
int main(void)
{
	char mychar[] = "_putchar\n";
	int n;

	int _putchar(char c);
	for (n = 0; n < 10; n++)
	{
		_putchar(mychar[n]);
	}
	return (0);
}
