#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d", ft_str_is_alpha("bla BLA bla"));
	printf("%d", ft_str_is_alpha("gr12oih"));
	printf("%d", ft_str_is_alpha("bla_bla"));
}

int 	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') 
		&& (str[i] < 'a' || str[i] > 'z') && str[i] != ' ')
		{
			return (0);
			break;
		}
		i ++;
	}
	return (1);
}
