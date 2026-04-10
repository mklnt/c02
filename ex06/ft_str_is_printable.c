#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d \n", ft_str_is_numeric("ALBERICA"));
	printf("%d \n", ft_str_is_numeric("Alberica Filo della Torre"));
	printf("%d \n", ft_str_is_numeric("316ff347890"));
	printf("%d \n", ft_str_is_numeric(""));
	printf("%d \n", ft_str_is_numeric("ßn"));
	printf("%d \n", ft_str_is_numeric("\n"));
}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while(str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
			break;
		}
		i ++;
	}
	return (1);
}
