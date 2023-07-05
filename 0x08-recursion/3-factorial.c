/**
  *factorial - Returns the factorial of a given number.
  *@n: intiger variable
  *Return: the factorial of a given number
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
