#include<ctype.h>
#include<stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main()
{
	int a = 96;
	printf("%c\n",toupper(a));
	printf("%c",ft_toupper(a));
}

