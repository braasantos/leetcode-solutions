#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


char *remove_special(char *s)
{
  int i = 0;
  int j = 0;
  char *str = malloc(sizeof(char) * strlen(s) + 1);
  while (s[i])
  {
    if (isdigit(s[i]) || isalpha(s[i]))
    {
        str[j] = s[i];
        j++; 
    }
    i++;
  }
  str[j] = '\0';
  return (str);
}

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

char *to_low(char *s)
{
    int i = -1;
    while (s[++i] != '\0')
	    s[i] = tolower(s[i]);
    return (s);
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
    char *str2 = ft_strdup(s);
    char *a = remove_special(str);
    char *b = remove_special(str2);
    char *new_str1 = to_low(a);
    char *new_str2 = to_low(b);
    char *c = rev_str(new_str1);
    if (ft_strcmp(new_str2, c) == 0)
    {
        free(new_str2);
        free(new_str1);
	free(str2);
        free(str);
	free(c);
        return (true);
    }
    else
    {
        free(new_str2);
        free(new_str1);
        free(str2);
        free(str);
        free(c);
        return (false);
  }
}

int main()
{
    char *str = "0P";
    printf("%d\n", isPalindrome(str));
    return 0;
}
