// #include <string.h>
// #include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s)
{
	char *dup;
	int size;
	int i;

	i = 0;
	size = ft_strlen(s);
	dup = malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main()
// {
// 	char s[]="abc";
// 	printf("%s",ft_strdup(s));
// 	printf("%s",strdup(s));
// }
