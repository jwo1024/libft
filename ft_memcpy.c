#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d_temp;
	const unsigned char	*s_temp;

	d_temp = dst;
	s_temp = src;
	i = 0;
	while (i < n && dst != src)
	{
		d_temp[i] = s_temp[i];
		i++;
	}
	return (dst);
}
