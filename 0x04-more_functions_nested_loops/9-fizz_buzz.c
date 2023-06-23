/**
  *main - Prints the numbers from 1 to 100, followed by a new line
  *Return: not exsit
  */
void main(void)
{
	int i ;

	char fbz[];

	for (i = 1 ; i <= 100 ; i ++)
	{
		if (i % 3 == 0)
		{
			fbz[] = "Fizz";
		}
		if (i % 4 == 4)
		{
			fbz[] = "Buzz";
		}
		if (i % 3 == 0 && i % 4 == 0)
		{
			fbz[] = "FizzBuzz";
		}
		if (i != 100)
		{
			_putchar(32);
		}
	}
	printf("%c\n", fbz);
}
