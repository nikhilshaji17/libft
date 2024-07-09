/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:18:09 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 16:18:12 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// This function is responsible for copying an area of memory.
// PARAMETERS = memcpy function takes the dest memory address, 
// src memory address and the number of bytes to be copied.

// RETURN VALUE = the address to the destination pointer
// the strcpy function can only copy strings, 
// memcpy copies an entire memory block. 
// So we can replace an array of ints or floats using this.

// We can also copy structs using memcpy
// In memcpy, if the memory locations of the source and the dest overlap, 
// Then two issues could occur:
// 1. the src values get modified when we didn't intend on it
// 2. the values added to dest are wrong, since src was modified.

// If dest is NULL, we can exit asap.
// If src is NULL, it ends up being a seg fault.

// The actual memcpy function gives seg fault when the dest is NULL.
// This is why I removed my guard condition

// We typecast void from void to char, because a char is of size 1 byte, 
// and this allows us to copy 1 byte at a time. (So why don't we use uint8_t ?) 
// Potential answer is that the char* keyword allows us to index 1 by 1
// void *variable_name = This declares a pointer, 
// but without specifying which data type it is pointing to.

// typedef struct{
// 	char name[256];
// 	int age;
// } Student;

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < len)
	{
		dest_ptr[i] = src_ptr[i];
		i = i + 1;
	}
	return (dest);
}

// int main(void)
// {
// 	char dest[] = "123456";
// 	char src[] = "ABCDE";
// 	printf("Theirs: %s\n", memcpy(dest, src, 3));
// 	printf("Mine: %s\n", ft_memcpy(dest, src, 3));
// }
