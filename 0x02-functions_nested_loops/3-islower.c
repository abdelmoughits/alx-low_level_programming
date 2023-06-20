#include <ctype.h>
/**
  *_islower -A function that checks for lowercase character
  *@c: the character in ASCII code
  *Reurn: 1 if c lower and 0 if it is upper
  */
int _islower(int c)
{
	if (!(islower(c) == 0))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
