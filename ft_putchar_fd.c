/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:11:32 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/05 13:11:34 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// We will need file pointers in order to open files.
// These work just like function pointers
// The file descriptor is an integer that uniquely 
// identifies an open file of the process.

// fd = 0 => Standard input
// fd = 1 => Standard output
// fd = 2 => Standard error

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// 	ft_putchar_fd('a', 2);
// }
