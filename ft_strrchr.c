#include <string.h>
#include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t last;
	int cond;

	cond = 0;
	last = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			last = i;
			cond = 1;
		}
		i++;
	}
	if (cond)
		return ((char *)(s + last));
	else if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	const char a[] = "hello wolcome to 42";
// 	int c = '\0';
// 	char *b = strrchr(a, c);
// 	char *d = ft_strrchr(a, c);
// 	printf("%s\n", b);
// 	printf("%s\n", d);
// }
