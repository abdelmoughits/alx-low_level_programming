/**
  *_strcmp - Compares two strings.
  *@s1: pointer to a char variable
  *@s2: pointer to a variable
  *Return: intiger value
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (1)
	{
		if (s1[i] = '\0')
		{
			return (-15);
		}
		else if (s2[i] = '\0')
		{
			return(15);
		}
		else
		{
			return (0);
		}
	}
}
