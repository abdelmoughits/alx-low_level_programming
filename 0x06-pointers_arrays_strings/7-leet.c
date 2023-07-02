/**
  *leet - Encodes a string into 1337.
  *@str: pointer to a char variable
  *Return: char variable
  */
char *leet(char *str)
{
	char ran[] = "43071";
	char tn[] = "aAeEoOtTlL";
	int i, count = 0;

	while (str[count])
	{
		i = 0;
		for (i = 0 ; i < 5 ; i += 2)
		{
			if (str[count] == tn[i] || str[count] == tn[i + 1])
			{
				str[count] = ran[i /  2];
			}
		}
		count++;
	}
	return (str);
}
