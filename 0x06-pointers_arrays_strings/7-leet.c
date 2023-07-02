/**
  *leet - Encodes a string into 1337.
  *@str: pointer to a char variable
  *Return: char variable
  */
char *leet(char *str)
{
	char ran[] = "43071";
	char tn[] = "aeotl";
	char nt[] = "AEOTL";
	int i, count = 0;

	while (str[count])
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (str[count] == tn[i] || str[count] == nt[i])
			{
				str[count] = ran[i];
			}
		}
		count++;
	}
	return (str);
}
