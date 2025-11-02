// #include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	while (i < len && s[i])
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
// int main()
// {
// 	char *s = "hello welocme home";
// 	unsigned int start = 18;
// 	size_t len = 18;
// 	printf("%s", ft_substr(s, start, len));
// }
