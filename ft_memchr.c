#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		cc;

	cc = (unsigned char)c;
	i = 0;
	str = s;
	while (i < n)
	{
		if (*str == cc)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}
