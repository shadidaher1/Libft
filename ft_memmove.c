#include<stdio.h>
#include<string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t		i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
        	return (NULL);
   	if (dest == src || n == 0)
		return (dest);
	if(d >= s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);

}
int main ()
{
char s[] = "12345";
//char dst[]= "6789a";
//char dst1[]="6789a";
char s1[]="12345";
char *p = memmove(s + 2 , s, 2); 
char *p1= ft_memmove(s1 + 2, s1, 2);
printf("%s\n", (char*)p); 
printf("%s\n",s);
printf("%s\n",p1);
printf("%s",s1);
}
