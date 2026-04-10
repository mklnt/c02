#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d \n", ft_str_is_numeric("alberica"));
	printf("%d \n", ft_str_is_numeric("alberica filo della torre"));
	printf("%d \n", ft_str_is_numeric("316ff347890"));
}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && str[i] != ' ')
		{
			return (0);
			break;
		}
		i ++;
	}
	return (1);
}
