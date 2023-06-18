#include <stdio.h>
#include <stdbool.h>
/**
  *main -Entry point
  *Return: always 0
  */
int main(void)
{	int printed2[100], printed1[100];
	int i, b;
	int d = 0;
	int count = 0;
	bool flag;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			if (i == b)
				continue;
			flag = true;
			for (d = 0 ; d <= count ; d++)
			{
				if (printed1[d] == b && printed2[d] == i)
				{
					flag = false;
					break; }}
			if (flag == false)
				continue;
			count++;
			printed1[count] = i;
			printed2[count] = b;
			putchar(i);
			putchar(b);
			if (count == 45)
				break;
			putchar(44);
			putchar(32); }}
	putchar('\n');
	return (0);
}
