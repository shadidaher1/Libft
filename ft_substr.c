#include<string.h>
#include<stdlib.h>
#include<stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substring;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (NULL)
	
	substring = malloc(len *sizeof(char))
	while (i < len && s[i])
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	return (substring);
}
int main ()
{
	char *s="hello welocme home";
	unsigned int start= 5;
	size_t len = 7;
	printf("%s",ft_substr(s,start,len));

}
