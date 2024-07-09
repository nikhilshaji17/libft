/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:35:12 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 11:35:14 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i = i + 1;
	ptr = (char *)malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i ++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *to_copy = "Hello";
// 	char *dest;
// 	char *dest2;

// 	dest = ft_strdup(to_copy);
// 	printf("%lu \n", strlen(dest));
// 	printf("%s \n", dest);
// 	printf("%i\n", dest[5]);	

// 	dest2 = strdup(to_copy);
// 	printf("%lu \n", strlen(dest2));
// 	printf("%s \n", dest2);	
// 	printf("%i\n", dest2[5]);
// }
