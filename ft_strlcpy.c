/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:20:33 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 13:20:38 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parameters = dest pointer, source pointer and size of the destination buffer
//Return type = size of the array we tried to create
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(src);
	if (dest == NULL)
		return (length);
	else if (size <= 0)
		return (length);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (length);
}
