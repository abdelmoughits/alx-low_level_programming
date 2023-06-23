/**
  *_isupper - Checks for uppercase character.
  *@c: intiger variable
  *Return: 1 if c is uppercase. otherwise 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
