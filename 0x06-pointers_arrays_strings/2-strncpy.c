/**
  *_strncpy - Copies a string.
  *@dest:pointer to a char variable
  *@src: pointer to  a char variable
  *@n:intiger variable
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && dest[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
