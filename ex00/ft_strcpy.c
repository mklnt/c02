#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	source[] = "albericafilodellatorre";
	char	dest[] = "stefanonazzi";
	printf("%s", ft_strcpy(dest, source));
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
