char
	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = 0;
	while (1)
	{
		if (*str == (char) c)
			ret = (char *) str;
		if (!*str)
			break ;
		str++;
	}
	return (ret);
}

char
	*ft_strrchrset(const char *str, const char *charset)
{
	char	*closest_pos;
	char	*char_pos;

	closest_pos = 0;
	while (*charset)
	{
		char_pos = ft_strrchr(str, *charset);
		if (char_pos && (!closest_pos || char_pos > closest_pos))
			closest_pos = char_pos;
		charset++;
	}
	return (closest_pos);
}
