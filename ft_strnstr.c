#include<stdio.h>
//#include <bsd/string.h>
//#include<string.h>
char *ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t  i;
    size_t  j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i< len && big[i])
    	{
		if (big[i] == little[0])
       		{
			j = 0;
      	 	 	while (little[j] && j + i < len && little[j] == big[i+j])
       		 	{
				if (little[j+1] == '\0')
        	 			return ((char *)&big[i]);
				j++;
        		}
		}
		i++;
    	}
	return (NULL);

}

int main ()
{
	char big[]="Welcome to 42 school";
	char	little[]="\0";
	size_t	len = 3;
	printf("%s",ft_strnstr(big,little,len));
//	printf("%s",strnstr(big,little,len));
}
