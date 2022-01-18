#include	"libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
	{
		if (c == 32)
			return (64);
		else if (ft_isalnum(c))
			return (ft_isalnum(c));
		return (16);
	}
	return (0);
}
