#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - The entry point for the program
 *  @parameter: There is no parameter for this function
 *
 *  Return: The function returns a value of zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}