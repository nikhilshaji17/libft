/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:15:09 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 10:15:11 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// I have added guard conditions for in case len is negative
// and if the pointer points to NULL - this is removed

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp_ptr;

	i = 0;
	temp_ptr = (unsigned char *)b;
	if (len <= 0)
		return (b);
	while (i < len)
	{
		temp_ptr[i] = (unsigned char)c;
		i = i + 1;
	}
	return (b);
}
