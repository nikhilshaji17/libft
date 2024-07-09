/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:06:28 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 16:06:30 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Both strings are assumed to be n bytes long (man specification).
// Zero length strings are always identical

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((i < (n - 1)))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i = i + 1;
	}
	return (str1[i] - str2[i]);
}

// int main(void)
// {
// 	char *s1 = "Pello";
// 	char *s2 = "Hello";
// 	printf("Theirs: %i\n", memcmp(s1,s2,48));
// 	printf("Mine: %i\n", ft_memcmp(s1,s2,48));
// }