/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:49:13 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 14:49:15 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '1';
// 	int test4 = 1;

// 	printf("%i\n", isalnum(test));
// 	printf("%i\n", isalnum(test2));
// 	printf("%i\n", isalnum(test3));
// 	printf("%i\n", isalnum(test4));
// 	printf("----------------------\n");
// 	printf("%i\n", ft_isalnum(test));
// 	printf("%i\n", ft_isalnum(test2));
// 	printf("%i\n", ft_isalnum(test3));
// 	printf("%i\n", ft_isalnum(test4));
// }
