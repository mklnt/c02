#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	printf("%s \n", ft_strupcase("ALBANIA"));
	printf("%s \n", ft_strupcase("Alberica 2"));
	printf("%s \n", ft_strupcase("alberica"));
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')//str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i ++;
	}
	return (str);
}
