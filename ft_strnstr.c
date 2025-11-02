// #include <stdio.h>
// #include <string.h>
#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && j + i < len && little[j] == big[i + j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char big[] = "Welcome to 42 school";
// 	char little[] = "ato";
// 	size_t len = 14;
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	// printf("%s\n", strnstr(big, little, len));
// }
