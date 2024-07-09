/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:36:04 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 14:36:11 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If there is an overflow of the maximum variable, I return NULL.
// Also, if either count or size is 0, NULL is returned
// Also, if the first condition is hit, we can return
// either NULL or a malloc that can be freed.
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			maximum;

	i = 0;
	maximum = size * count;
	if ((size != 0) && ((maximum / size) != count))
		return (NULL);
	temp = malloc((maximum));
	if (temp == NULL)
		return (NULL);
	while (i < maximum)
	{
		temp[i] = 0;
		i = i + 1;
	}
	return (temp);
}
