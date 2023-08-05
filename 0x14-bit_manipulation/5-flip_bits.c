#include "main.h"
/**
  *flip_bits - Returns the number of bits you would
  *@n: intiger
  *@m: intiger
  *Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	int count;

	n = n ^ m;
	for (count = 0 ; count <= 63 ; count++)
	{
		m = (1UL << count) & n;
		if (m)
		{
			res++;
		}
	}
	return (res);
}
