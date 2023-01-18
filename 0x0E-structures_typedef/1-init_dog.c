#ifndef DOG_INIT
#define DOG_INIT
/**
  * init_dog - initializes a dog variable
  * @d: the pointer to the struct
  * @name: a pointer to the name of the dog
  * @age: the age of the dog
  * @owner: the name of the owner of the dog
  *
  * Return: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#endif
