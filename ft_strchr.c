#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = (char)c;
	while (*s)
	{
		if (*s == a)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && a == '\0')
		return ((char *)s);
	return (NULL);
}
