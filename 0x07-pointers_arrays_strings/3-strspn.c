/**
  *_strspn - Gets the length of a prefix substring.
  *@s: pointer to a char variable
  *@accept: pointer to a char variable
  *Return: an intiger value
  */
unsigned int _strspn(char *s, char *accept)
{
	int i , b, retu, c = 1;

	retu = 0;

	for(i = 0 ; s[i] != '\0' ; i++)
	{
		b = 0;
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[i] != accept[b] && c == 1)
			{
				c = 0;
			}
		}
		if (c == 1)
		{
			retu++;
		}
	}
	return (retu);
}
