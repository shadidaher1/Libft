// #include <string.h>
// #include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *s);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_d;
	size_t len_s;
	size_t i;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (len_d >= size)
		return (len_s + size);
	else
	{
		i = 0;
		while (src[i] && i < size - (len_d + 1))
		{
			dst[len_d + i] = src[i];
			i++;
		}
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
// int main()
// {
// 	char d[20] = "shadi";
// 	char d1[20] = "shadi";
// 	char s[] = "daherrr";
// 	size_t size = 20;
// 	printf("%ld\n", strlcat(d1, s, size));
// 	printf("%s\n", d1);
// 	printf("%ld\n", ft_strlcat(d, s, size));
// 	printf("%s\n", d);
// }