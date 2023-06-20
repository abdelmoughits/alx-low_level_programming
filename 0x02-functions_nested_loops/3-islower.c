#include <ctype.h>
/**
  *_islower -Shows 1 if the input is a
  *lowercase character, an other casees shows 0
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
