#ifndef DOG_H
#define DOG_H
/**
  *struct dog - a new type struct dog
  *@name: char pointer
  *@owner: char pointer
  *@age: float variable
  *Description: a new type struct dog with the following elements:
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
