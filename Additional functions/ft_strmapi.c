#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t	length;
	char	*final_string;

	i = 0;
	length = ft_strlen(s);
	final_string = malloc((sizeof(char) * length) + 1);
	if (final_string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final_string[i] = (*f)(i, s[i]);
		i += 1;
	}
	final_string[i] = '\0';
	return (final_string);
}