#include "libft.h"

char *ft_itoa(int n)
{
    char *res;
    long num;
    int len;

    num = n;
    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        len++;
        n /= 10;
    }
    res = malloc(len + 1);
    if (!res)
        return (NULL);
    res[len] = '\0';
    if (num == 0)
        res[0] = '0';
    if (num < 0)
    {
        res[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        res[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (res);
}
