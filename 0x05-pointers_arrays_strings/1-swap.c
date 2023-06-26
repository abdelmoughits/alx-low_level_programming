/**
  *swap_int - Swaps the values of two integers.
  *@a: pointer to an intiger variable
  *@b: pointer toan other intiger variable
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
