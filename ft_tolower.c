/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:43:19 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 14:43:21 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '1';
// 	int test4 = 1;

// 	printf("%c\n", tolower(test));
// 	printf("%c\n", tolower(test2));
// 	printf("%c\n", tolower(test3));
// 	printf("%c\n", tolower(test4));
// 	printf("----------------------\n");
// 	printf("%c\n", ft_tolower(test));
// 	printf("%c\n", ft_tolower(test2));
// 	printf("%c\n", ft_tolower(test3));
// 	printf("%c\n", ft_tolower(test4));
// }
