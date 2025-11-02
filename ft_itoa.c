#include "libft.h"
// #include <stdio.h>

size_t count_digits(int n)
{
    size_t i;

    i = 1;
    while (n / 10)
    {
        i++;
        n /= 10;
    }
    return (i);
}

char *ft_itoa(int n)
{
    size_t i;
    long int numb;
    char *string;

    numb = n;
    i = count_digits(n);
    if (numb < 0)
    {
        i++;
        numb *= -1;
    }
    string = malloc(sizeof(char) * (i + 1));
    string[i] = '\0';
    while (i--)
    {
        string[i] = numb % 10 + '0';
        numb /= 10;
    }
    if (n < 0)
        string[0] = '-';
    return (string);
}
// int main()
// {
//     int n = -1231212;
//     char *a = ft_itoa(n);
//     printf("%s\n", a);
// }