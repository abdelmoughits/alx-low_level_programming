int prime(int n, int a);
/**
  *is_prime_number - Returns 1 if the input integer is a
  *prime number, otherwise return 0.
  *@n: intiger variable
  *Return: 1 or 0
  */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
  *prime - Returns 1 if the input integer is a
  *prime number, otherwise return 0.
  *@n: intiger variable
  *@a: intiger variable
  *Return: 1 or 0
  */
int prime(int n, int a)
{
	if ((n % a == 0 && a < n) || n < 1)
	{
		return (0);
	}
	else if (n == a)
	{
		return (1);
	}
	return (prime(n, a + 1));
}
