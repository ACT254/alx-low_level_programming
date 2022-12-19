#include <stdio.h>
int main(void)
{
	char str[] ="Kalid";
	char *c = &str
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
