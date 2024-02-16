#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

char    *ft_strdup(const char *s)
{
    int        len;
    int        i;
    char    *mlc;

    len = strlen(s);
    mlc = (char *)malloc ((len + 1) * sizeof(char));
    if (!mlc)
        return (NULL);
    i = 0;
    while (s[i])
    {
        mlc[i] = s[i];
        i++;
    }
    mlc[i] = '\0';
    return (mlc);
}

char *rev_str(char *s)
{
    int i = strlen(s);
    int j = 0;
    char *str = malloc(sizeof(char) * i + 1);
    i--;
    while (i >= 0)
    {
        str[j] = s[i];
        j++;
        i--;
    }
    str[j] = '\0';
    return (str);
}

bool isPalindrome(char* s)
{
    char *str = ft_strdup(s);
    char *c = rev_str(str);
    if (ft_strcmp(c, s) == 0)
    {
        free(str);
	    free(c);
        return (true);
    }
    else
    {
        free(str);
        free(c);
        return (false);
  }
}

char* firstPalindrome(char** words, int wordsSize)
{
    int i = 0;
    while (i < wordsSize)
    {
        if (isPalindrome(words[i]))
            return (words[i]);
        i++;
    }
    return ("");
}

