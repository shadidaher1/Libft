#include <string.h>
#include<stdio.h>

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

int main()
{
	const char string[]="shadi";
	int find = 'e';
	char *ptr = ft_strchr(string,find);
//	char *pt = strchr(string,find);
//	printf("%s\n",pt);
	printf("%s",ptr);
}
