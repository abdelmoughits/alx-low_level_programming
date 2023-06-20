#include <ctype.h>
/**
  *_isalpha - Shows 1 if the input is an
  *alphabetic character. Another casees shows
  *0
  *@c: the character in ASCII code
  *Return: 1 if c alphabetic character. 0 for the rest
  */
int _isalpha(int c)
{
	if (!(isalpha(c) == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
