// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"
int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int main()
// {
// 	int a = 97;
// 	printf("%c\n", toupper(a));
// 	printf("%c", ft_toupper(a));
// }
