size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	i = 0;

	while (*s)
	{
		while (accept[i])
			i++;
	}
}
