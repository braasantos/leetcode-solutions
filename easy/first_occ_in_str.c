int strStr(char* haystack, char* needle)
{
	int	i;
	int	j;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

