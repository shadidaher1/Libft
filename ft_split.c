#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strrchr(const char *s, int c);
int count_words(char const *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            j++;
        i++;
    }
    return (j);
}
char **free_array(char **arr, size_t j)
{
    if (!arr)
        return (NULL);
    while (j > 0)
    {
        j--;
        free(arr[j]);
    }
    free(arr);
    return (NULL);
}
char **ft_split(char const *s, char c)
{
    if (!s)
        return (NULL);
    char **array;
    int i;
    int j;
    int count;
    int start;

    count = count_words(s, c);
    i = 0;
    array = malloc((count + 1) * sizeof(char *));
    if (!array)
        return (NULL);
    while (s[i] && j < count)
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        array[j] = ft_substr(s, start, i - start);
        if (!array[j])
            return (free_array(array, j));
        j++;
    }
    array[count] = NULL;
    return (array);
}
int main()
{
    // char a[] = "heeelelo";
    // char c = 'l';
    // char **arr = ft_split(a, c);
    // printf("%s", arr[1]);
    char **arr = ft_split("  hello my name is shadi  ", ' ');
    printf("%s", arr[1]);
    // free(arr);
    return 0;
}