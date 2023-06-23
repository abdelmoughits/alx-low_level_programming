/**
  *print_numbers - Prints the numbers, from 0 to 9,
  *followed by a new line
  *Return: not existe
  */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
