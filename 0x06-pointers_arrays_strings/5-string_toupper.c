/**
  *string_toupper - Changes all lowercase letters of a string to uppercase.
  *@st: char variable
  *Return: a char variable
  */
char *string_toupper(char *st)
{
	int i;

	for (i = 0 ; st[i] ; i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] -= 32;
		}
	}
	return (st);
}
