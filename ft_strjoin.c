// #include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
void *ft_calloc(size_t nmemb, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len_s1;
	size_t len_s2;
	char *s3;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s3 = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len_s1 + 1);
	ft_strlcat(s3, s2, len_s2 + 1 + len_s1);
	return (s3);
}

// int main()
// {
// 	char s1[] = "1234";
// 	char s2[] = "5678ab9";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// }