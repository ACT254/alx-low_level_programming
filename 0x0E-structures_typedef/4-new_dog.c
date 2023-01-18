#include "dog.h"
#include <stdio.h>

/**
  * new_dog - creates a new dog
  * @name: the name of the dog(pointer)
  * @age: the age of the dog
  * @owner: pointer to the owner of the dog
  *
  * Return: a pointer to the new dog created
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogi = {name, age, owner};

	return (&dogi);
}


