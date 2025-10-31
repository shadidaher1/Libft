void *calloc(size_t nmemb, size_t size)
{
	if (nmeb == 0 || size == 0)
		return (NULL);
	void *mem;
	mem = malloc (size * nmemb);
	if (mem == NULL)
		return (NULL);
	memset(mem,0, size * nmeb);
	return (mem);
}
