
int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		cur++;
	}
	return (cur);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				cur;
	unsigned int	destcur;

	cur = 0;
	destcur = ft_strlen(dest);
	if (size <= destcur)
		return (ft_strlen(src) + size);
	while (src[cur] != 0 && cur + destcur < size - 1)
	{
		dest[destcur + cur] = src[cur];
		cur++;
	}
	dest[destcur + cur] = 0;
	return (destcur + ft_strlen(src));
}
