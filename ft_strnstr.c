/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:26:03 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 14:26:05 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// If the size_t exceeds the length of the haystack - 
// just search till the end of the string
// WE need to search till \0 or till - 
// the (length(haystack) - length(needle))th element, whichever comes first
// If in case either the needle or the haystack are NULL, 
// the actual function gives us a seg fault
// In this function, I think it only checks upto len letters only. 
// So even if the substring is present, and it exists from index 0 to n,
// but the user enters the parameter as n - 1, 
// then we will only compare up until n - 1, in which case, we stl return NULL 

static char	*locate(const char *hay, const char *pin, size_t len, size_t i)
{
	size_t	temp;
	size_t	j;

	temp = 0;
	j = 0;
	while ((hay[i] != '\0') && (i < len))
	{
		if (hay[i] == pin[j])
		{
			temp = i;
			while ((hay[temp] == pin[j]) && (temp < len))
			{
				if (pin[j + 1] == '\0')
					return ((char *)&hay[i]);
				else if (hay[temp] == '\0')
					return (NULL);
				temp = temp + 1;
				j = j + 1;
			}
		}
		i = i + 1;
		j = 0;
	}
	return ((NULL));
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)&haystack[0]);
	return (locate(haystack, needle, len, i));
}

// int main(void)
// {
// 	printf("Theirs: %s\n", strnstr("abcthereonce was a horse", "ther", 9));
// 	printf("Mine: %s\n", ft_strnstr("abcthereonce was a horse", "ther", 9));
// }