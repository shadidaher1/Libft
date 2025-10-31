#include <string.h>
#include <stdio.h>

int ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    j = 0;
    i = 0;
	while (src[j] != '\0')
		j++;
	if (size > 1)
	{
	    while (size > 1 && src[i] != '\0')
   		 {
       			 dst[i] = src[i];
       			 i++;
      			  size--;
  		  }
  	  dst[i] = '\0';
	}
    return (j);
}
int main()
{
    char src[] = "shadiiiii";
    char dest[] = "hel0";
	char mdest[]= "hel0";
	printf("%ld", strlcpy(mdest, src, 0));
    printf("%s\n", mdest);
    printf("%d", ft_strlcpy(dest, src, 0));
    printf("%s", dest);
}
