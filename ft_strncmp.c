int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

	while	((*s1 != '\0') || (*s2 != '\0'))
	{
		if	(n-- <= 0)
			break;
		if	(*s1 != *s2)
		{
			return	(*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return	(0);
}
