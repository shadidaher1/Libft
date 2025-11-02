// #include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);
// char toUpper(unsigned int index, char character)
// {

//     if (character >= 'a' && character <= 'z')
//     {
//         return character - ('a' - 'A');
//     }
//     return character;
// }
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len;
    size_t i;
    char *new;

    if (!s || !f)
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    while (i < len)
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}
// int main()
// {
//     char *s = "Trying it at 10:09 PM";
//     printf("%s", ft_strmapi(s, toUpper));
// }
