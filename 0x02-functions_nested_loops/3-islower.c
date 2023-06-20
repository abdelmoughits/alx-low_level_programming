#include <ctype.h>
/**
  *_islower - Shows 1 if the input is a
  *lowercase character. Another casees shows
  *0
  *@c: the character in ASCII code
  *Return: 1 if c lowercase character. 0 for the rest
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
