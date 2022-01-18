#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	a;

	a = c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == a)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
