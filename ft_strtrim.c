// #include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_calloc(size_t nmemb, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char *a;

    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
    {
        i++;
    }
    j = ft_strlen(s1);
    while (j > i && ft_strrchr(set, s1[j - 1]))
    {
        j--;
    }
    a = ft_calloc(j - i + 1, sizeof(char));
    if (!a)
        return (NULL);
    ft_strlcpy(a, s1 + i, j - i + 1);
    return (a);
}
// int main()
// {
//     char s1[] = "abcShadi Daheracb";
//     char s2[] = "cba";
//     printf("%s\n", ft_strtrim(s1, s2));
// }
