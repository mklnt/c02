#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[]="dioporco";
	char	dest2[]="dioporco";
	char	src[]="albericafilodellatorre";
	printf("test: %s\n", strncpy(dest, src, 7));
	printf("mine: %s\n", ft_strncpy(dest2, src, 7));
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);
}
