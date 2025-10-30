#include <string.h>
#include<stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while ( i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	i--;
	}
	return (NULL);
}

int main ()
{
	const char *a="hello and welcome";
	int c = 's';
//	char *b = strrchr(a,c);
	char *d = ft_strrchr(a,c);
//	printf("%s\n",b);
	printf("%s",d);
}
