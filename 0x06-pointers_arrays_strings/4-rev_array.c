/**
  *reverse_array - Reverses the content of an array of integers.
  *@a: pointer to an intiger variable
  *@n: intiger variable
  *Return: an intiger value
  */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0 ; i <= (n - 1) / 2 ; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
