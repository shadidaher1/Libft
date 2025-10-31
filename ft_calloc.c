#include <stdlib.h>
#include<string.h>
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	void *mem;
	mem = malloc (size * nmemb);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}
