#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d \n", ft_str_is_numeric("3160 347890"));
	printf("%d \n", ft_str_is_numeric("3160347890"));
	printf("%d \n", ft_str_is_numeric("316ff347890"));
}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			return (0);
			break;
		}
		i ++;
	}
	return (1);
}
