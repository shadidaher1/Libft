
#include<string.h>
#include<stdio.h>

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_l;
	size_t	dest_l;
	size_t total_len;

	src_l = 0;
	dest_l = 0;
	while (dst[dest_l])
		dest_l++;
	while (src[src_l])
		src_l++;
	if (size < dest_l + 1)
		return (src_l + size);
	total_len = src_l + dest_l;
	src_l = 0;
	if (size > dest_l + 1)
	{
		while (dest_l < size - 1  && src[src_l] != '\0')
		{
			dst[dest_l] = src[src_l];
			dest_l++;
			src_l++;
		}
		dst[dest_l] = '\0';
	}
	return (total_len);
}
int main()
{
//    char dst[15] = "Hello, ";
//  const char *src = "orld!";
//  size_t total_length;

//   total_length = strlcat(dst, src, 7);

//    printf("Concatenated string: %s\n", dst);
//   printf("Total length attempted: %ld\n",total_length);

    // Check for truncation
//    if (total_length >= sizeof(dst)) {
//      printf("The string was truncated.\n");
//   }

	char src[] = "Welcome";
	char dst[15] = "helllo";
	char test[] = "helllo";
	printf("%ld",strlcat(dst,src,8));
	printf("%s\n",dst);
	printf("%d",ft_strlcat(test,src,8));
	printf("%s",test);
}
