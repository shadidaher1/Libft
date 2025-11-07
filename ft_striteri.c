#include "libft.h"
#include <stdio.h>
void tooupper(unsigned int c, char *a)
{
    (void)c;
    if (*a >= 'a' && *a <= 'z')
        *a -= 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    if (!s || !f)
        return;
    size_t i;

    i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

int main()
{
    char s[] = "shadi is in Uni";
    ft_striteri(s, tooupper);
    printf("%s", s);
}