/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:40:45 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 12:40:47 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// // dest_size = size of the entire destination buffer.
// // src and dest = both NULL terminated
// // The room for the NUL terminator should also be 
// // included in the destination buffer.
// // Both src and dest must be NULL terminated (man specifications)

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	j = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= size)
		return (src_length + size);
	i = dst_length;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i += 1;
		j += 1;
	}
	dst[i] = '\0';
	return (dst_length + src_length);
}
