/**
  *_memcpy - Copies memory area.
  *@dest: pointer to a char variable
  *@src: pointer to a char variable
  *@n: intiger variable
  *Return: the variable dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (dest[i])
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else
		{
			break;
		}
		i++;
	}
	return (dest);
}
