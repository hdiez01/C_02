char	ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (c == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			i++;
		}
		else if (c > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			c = 0;
		}
		else
		{
			c++;
		}
		i++;
	}
	return(str);
}
