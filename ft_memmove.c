/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:41:27 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 16:41:29 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// For memmove, when the dest pointer is before the src pointer, 
// then we essentially perform the same thing as we did in memcpy.
// However, if the dest pointer lies after the src pointer, 
// then we need to do memcpy backwards, to prevent data from being overwritten.
// We do not care if the src pointer data is updated, 
// memmove shifts everything from src to dest 
// and we do not worry about src again.
// memmove is used if we have to deal with overlapping locations in memory
// The actual memmove function gives a seg fault when src is NULL 
// - This was a design choice, no guard was placed.
// The difference between memmove and memcpy is that 
// memmove does the copy in a non destructive manner
#include "libft.h"

static void	perform_move(char *dest_ptr, char *src_ptr, size_t i, size_t len)
{
	if (dest_ptr < src_ptr)
	{
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			i = i + 1;
		}
	}
	else
	{
		i = len - 1;
		while (i)
		{
			dest_ptr[i] = src_ptr[i];
			i = i - 1;
		}
		dest_ptr[0] = src_ptr[0];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dest);
	perform_move(dest_ptr, src_ptr, i, len);
	return (dest);
}

// int main(void)
// {
// 	char dest[] = "ABCDE";
// 	char *src = "123";
// 	printf("Mine: %s\n",ft_memmove(dest, src, 0));
// 	printf("Theirs: %s\n", memmove(dest, src, 0));
// }