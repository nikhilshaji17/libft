/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:16:31 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 15:16:32 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '\0';
// 	int test4 = '1';

// 	printf("%i\n", isprint(test));
// 	printf("%i\n", isprint(test2));
// 	printf("%i\n", isprint(test3));
// 	printf("%i\n", isprint(test4));
// 	printf("----------------------\n");
// 	printf("%i\n", ft_isprint(test));
// 	printf("%i\n", ft_isprint(test2));
// 	printf("%i\n", ft_isprint(test3));
// 	printf("%i\n", ft_isprint(test4));
// }
