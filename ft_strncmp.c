
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cur;

	if (n == 0)
		return (0);
	cur = 0;
	while (s1[cur] != 0 && s2[cur] != 0)
	{
		if (s1[cur] != s2[cur] || cur >= n - 1)
		{
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		}
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}
