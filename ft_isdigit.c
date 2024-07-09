/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:14:42 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 15:14:44 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '1';
// 	int test4 = 1;

// 	printf("%i\n", isdigit(test));
// 	printf("%i\n", isdigit(test2));
// 	printf("%i\n", isdigit(test3));
// 	printf("%i\n", isdigit(test4));
// 	printf("----------------------\n");
// 	printf("%i\n", ft_isdigit(test));
// 	printf("%i\n", ft_isdigit(test2));
// 	printf("%i\n", ft_isdigit(test3));
// 	printf("%i\n", ft_isdigit(test4));
// }
