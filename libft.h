#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_toupper(int c);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

#endif