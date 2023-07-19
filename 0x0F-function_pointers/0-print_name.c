#include <stdlib.h>
#include "function_pointers.h"
/**
  *print_name - Print a name
  *@name: pointer to a cha variable
  *@f: a funtion
  *Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
