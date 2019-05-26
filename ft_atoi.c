#include "libft.h"

int ft_atoi(char *s)
{
	int nbr;
	int i;
	int neg;
	int mult;

	mult = 1;
	neg = 1;
	i = ft_strlen(s) - 1;
	nbr = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			nb += (str[i] - 48) * mult;
		if (str[i] == '-')
			neg = -1;
		mult *= 10;
		i--;
	}
	return (nbr * neg);
}
