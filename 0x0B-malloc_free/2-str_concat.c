#include <stdlib.h>

/**
  * str_concat - concatenates two strings and returns pointer to new location
  * @s1: pointer to the first string
  * @s2: the pointer to the second string
  *
  * Return: the pointer to the combined string
  */

char *str_concat(char *s1, char *s2)
{
	void *x = NULL;
	int k, m;
	int i = 0;
	int j = 0;
	char *ptr;
	char *empty_string = NULL;

	empty_string = malloc(1);
	*empty_string = '\0';
	if (s1 == NULL)
	{
		s1 = empty_string;
	}
	if (s2 == NULL)
	{
		s2 = empty_string;
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (x);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (m = 0; m < j; m++)
	{
		ptr[i + m] = s2[m];
	}
	ptr[i + j + 1] = '\0';
	return (ptr);
}
