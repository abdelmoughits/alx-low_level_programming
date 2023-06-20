#include <ctype.h>
/**
  *3-islower.c -P a function that checks for lowercase character
  *Reurn: 1 if c lower and 0 if it is upper
  */
int _islower(int c)
{
	if (!(islower(c) == 0))
	{
		return (1);
	}else 
	{
		return (0);
	}
}
