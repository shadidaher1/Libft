#include "libft.h"

static int  word_count(const char *str, char c)
{
    int count;
    int trigger;

    count = 0;
    trigger = 0;
    while (*str)
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            count++;
        }
        else if (*str == c)
            trigger = 0;
        str++;
    }
    return (count);
}

static char *fill_word(const char *str, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = malloc((end - start + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (start < end)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = 0;
    return (word);
}

static void *ft_free(char **strs, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
    return (NULL);
}

static void ft_initiate_vars(size_t *i, int *j, int *s_word)
{
    *i = 0;
    *j = 0;
    *s_word = -1;
}

char **ft_split(const char *s, char c)
{
    char **res;
    size_t i;
    int j;
    int s_word;

    ft_initiate_vars(&i, &j, &s_word);
    if (!s)
        return (NULL);
    res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
    if (!res)
        return (NULL);
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && s_word < 0)
            s_word = i;
        else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
        {
            res[j] = fill_word(s, s_word, i);
            if (!(res[j]))
                return (ft_free(res, j));
            s_word = -1;
            j++;
        }
        i++;
    }
    return (res);
}
