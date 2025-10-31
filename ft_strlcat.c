unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d >= size || size == 0)
		return ( size + s);
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (s + d);
}
