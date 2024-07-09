/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:10:06 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/01 15:10:09 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = 'T';
// 	char test2 = 't';
// 	char test3 = '1';
// 	int test4 = 1;

// 	printf("%i\n", isalpha(test));
// 	printf("%i\n", isalpha(test2));
// 	printf("%i\n", isalpha(test3));
// 	printf("%i\n", isalpha(test4));
// 	printf("----------------------\n");
// 	printf("%i\n", ft_isalpha(test));
// 	printf("%i\n", ft_isalpha(test2));
// 	printf("%i\n", ft_isalpha(test3));
// 	printf("%i\n", ft_isalpha(test4));
// }
