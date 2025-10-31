#include<string.h>
#include<stdlib.h>
#include<stdio.h>
size_t ft_strlen(const char *s);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substring;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s) || s[i] == '\0')
		return (ft_strdup("");
	 if (len > ft_strlen(s + start))
 	       len = ft_strlen(s + start);
	substring = ft_calloc(len + 1, sizeof(char));
  	if (!substring)
		return (NULL);
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
	unsigned int start= 50;
	size_t len = 7;
	printf("%s",ft_substr(s,start,len));

}
