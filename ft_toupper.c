/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:43:30 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/02 14:43:32 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '1';
// 	int test4 = 1;

// 	printf("%c\n", toupper(test));
// 	printf("%c\n", toupper(test2));
// 	printf("%c\n", toupper(test3));
// 	printf("%c\n", toupper(test4));
// 	printf("----------------------\n");
// 	printf("%c\n", ft_toupper(test));
// 	printf("%c\n", ft_toupper(test2));
// 	printf("%c\n", ft_toupper(test3));
// 	printf("%c\n", ft_toupper(test4));
// }
