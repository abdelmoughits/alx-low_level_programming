/**
  *cap_string - Capitalizes all words of a string
  *@str: pointer to a char variable
  *Return: char value
  */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			i++;
		}
		if (str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0 ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ' ')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
