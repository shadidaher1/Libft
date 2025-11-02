// #include <stdio.h>
// #include <string.h>
#include "libft.h"
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main()
// {
// 	char *s = "abc";
// 	printf("%ld\n", ft_strlen(s));
// 	printf("%ld\n", strlen(s));
// }