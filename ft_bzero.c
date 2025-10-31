#include <strings.h>
#include<stdio.h>
void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}

/*
int main ()
{
	char	s[]="abcdc";
	size_t	n = 2;
	ft_bzero(s,n);
	printf("%s",s);
}
*/
