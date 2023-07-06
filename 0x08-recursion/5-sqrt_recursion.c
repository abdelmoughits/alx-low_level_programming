int sqr(int n, int i);
/**
  *_sqrt_recursion - Returns the natural square root of a number.
  *@n: intiger variable
  *Return: the natural square root of a number.
  */
int _sqrt_recursion(int n)
{
	return(sqr(n, 1));
}
/**
  *sqr - Returns the natural square root of a number.
  *@n: intiger variable
  *@i: intiger variable
  *Return: the natural square root of a number.
  */
int sqr(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqr(n, i + 1));
}
