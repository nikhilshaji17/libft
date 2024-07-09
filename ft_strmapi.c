/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:44:18 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 09:44:19 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			length;
	char			*final_string;

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
