#include	"libft.h"

static size_t	cnt_c(char const *s, char c);
static void		c_to_zero(char	*str, char c);
static char		*split_word(char *str);

char	**ft_split(char const *s, char c)
{
	size_t	l;
	char	*tmp;
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (cnt + 1));
	l = ft_strlen(s);
	tmp = ft_substr(s, 0, l);
	c_to_zero(s, c);
	
	split_words();

	free(tmp);
	return (arr);
}

static char		*split_words(char **arr, char *str, size_t l)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (i < l)
	{
		if (str[i])
		{
			len = ft_strlen(&str[i])
			while (str[i])
			{
				
				i++;
			}
		}
		i++;
	}
}

static size_t	cnt_c(char const *s, char c)
{
	size_t cnt;

	while (*s)
	{
		if (*s == c)
			cnt++;
		s++;
	}
	return (cnt);
}

static void		c_to_zero(char	*str, char c)
{
	if (*str)
	{
		if (*str == c)
			*str = c;
		str++;
	}
}
