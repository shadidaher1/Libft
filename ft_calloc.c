// #include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	void *mem;
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}
// int main()
// {
// 	size_t a = 4;
// 	size_t b = 4;
// 	printf("a");
// 	char *c = ft_calloc(a, b);
// 	printf("a");
// 	printf("%s", c);
// 	// free(c);
// }