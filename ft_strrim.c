
#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *result;

    if (!s1 || !set)
        return (NULL);
    len = ft_strlen(s1);
    if (len == 0)
        return (ft_strdup(""));
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    if (start == len)
        return (ft_strdup(""));
    end = len - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;
    result = ft_calloc(end - start + 2, sizeof(char));
    if (!result)
        return (NULL);
    ft_memcpy(result, s1 + start, end - start + 1);
    result[end - start + 1] = '\0';
    return (result);
}

