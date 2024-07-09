/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:31:16 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 10:31:21 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// The last temp[i] == c check is to compare whether \0's are equal

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] != '\0')
	{
		if (temp[i] == (char)c)
			return (&temp[i]);
		i = i + 1;
	}
	if (temp[i] == (char)c)
		return (&temp[i]);
	return (NULL);
}

// int main(void)
// {
// 	char test[] = "ABCDEF";
// 	char c = 'C';
// 	printf("%s\n", ft_strchr(test, c));
// }