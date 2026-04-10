#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d \n", ft_str_is_numeric("ALBERICA"));
	printf("%d \n", ft_str_is_numeric("Alberica Filo della Torre"));
	printf("%d \n", ft_str_is_numeric("316ff347890"));
}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && str[i] != ' ')
		{
			return (0);
			break;
		}
		i ++;
	}
	return (1);
}
