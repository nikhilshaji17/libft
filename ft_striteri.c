/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:44:09 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 09:44:11 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i += 1;
	}
	return ;
}

// void change_letters(unsigned int i, char* c)
// {
// 	*c = 'A';
// }
// int main(void)
// {
// 	void (*f)(unsigned int, char *);
// 	char array[] = "Hello, There";
// 	f = change_letters;
// 	ft_striteri(array, f);
// 	for(int i = 0; i < 12; i++)
// 	{
// 		printf("%c\n", array[i]);
// 	}
// }
