/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:13:00 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 15:13:03 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '\0';
// 	int test4 = 1;

// 	printf("%i\n", isascii(test));
// 	printf("%i\n", isascii(test2));
// 	printf("%i\n", isascii(test3));
// 	printf("%i\n", isascii(test4));
// 	printf("----------------------\n");
// 	printf("%i\n", ft_isascii(test));
// 	printf("%i\n", ft_isascii(test2));
// 	printf("%i\n", ft_isascii(test3));
// 	printf("%i\n", ft_isascii(test4));
// }
