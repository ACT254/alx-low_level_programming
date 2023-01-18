#ifndef DOG_HEADER
#define DOG_HEADER

/**
  * struct dog - a stucture for defining dogs
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the name of th owner of the dog
  *
  * Description: enables us to create a dog variable more easily
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif