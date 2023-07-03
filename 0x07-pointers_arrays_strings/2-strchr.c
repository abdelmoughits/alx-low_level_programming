à/**
  *_strchr - Locates a character in a string
  *@s: pointer to a char variable
  *@c: char variable
  *Return: char value
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] <= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
