#include <ctype.h>
/**
  *_isdigit - Checks for a digit (0 through 9).
  *@c: intiger variable
  *Return: 1 if c is a digit. otherwise 0
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
