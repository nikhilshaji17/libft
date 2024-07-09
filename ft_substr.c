/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:25:00 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 14:25:02 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_substr(char *sub, char	*s, unsigned int start, size_t len)
{
	unsigned int	sub_index;

	sub_index = 0;
	while (s[start] != '\0' && sub_index < (unsigned int)len)
	{
		sub[sub_index] = s[start];
		start = start + 1;
		sub_index = sub_index + 1;
	}
	sub[sub_index] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			length;

	substr = NULL;
	length = 0;
	if (s == NULL || ft_strlen(s) <= start)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (substr);
		substr[0] = '\0';
		return (substr);
	}
	length = ft_strlen(s);
	if (length - start < len)
		len = length - start;
	substr = (char *)malloc((sizeof(char) * len) + 1);
	if (substr == NULL)
		return (substr);
	make_substr(substr, (char *)s, start, len);
	return (substr);
}
