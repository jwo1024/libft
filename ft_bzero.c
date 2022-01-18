#include	"libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = b;
	i = 0;
	while (i < len)
		str[i++] = 0;
}
