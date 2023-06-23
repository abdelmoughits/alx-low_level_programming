#include <ctype.h>
/**
  *_isupper - Checks for uppercase character.
  *@c: intiger variable
  *Return: 1 if c is uppercase. otherwise 0
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
