#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	printf("%s \n", ft_strlowcase("ALBANIA"));
	printf("%s \n", ft_strlowcase("Alberica 2"));
	printf("%s \n", ft_strlowcase("alberica"));
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')//str[i] >= 97 && str[i] <= 122)
			str[i] += 32;
		i ++;
	}
	return (str);
}
