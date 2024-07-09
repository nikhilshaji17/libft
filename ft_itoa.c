/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:05:49 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 10:05:52 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_string(char *f_string, unsigned int num, int index, int n)
{
	char	digit;

	if (n < 0)
	{
		f_string[0] = '-';
		while (index > 0)
		{
			digit = (num % 10) + '0';
			f_string[index] = digit;
			index = index - 1;
			num = num / 10;
		}
	}
	else
	{
		while (index >= 0)
		{
			digit = (num % 10) + '0';
			f_string[index] = digit;
			index = index - 1;
			num = num / 10;
		}
	}
}

static int	find_num_of_digits(int n)
{
	int				number_of_digits;
	unsigned int	number;

	number_of_digits = 0;
	number = 0;
	if (n < 0)
	{
		number = n * -1;
		number_of_digits = 1;
	}
	else
		number = n;
	if (number == 0)
		number_of_digits += 1;
	else
	{
		while (number >= 1)
		{
			number = number / 10;
			number_of_digits = number_of_digits + 1;
		}
	}
	return (number_of_digits);
}

char	*ft_itoa(int n)
{
	int				number_of_digits;
	unsigned int	number_two;
	char			*final_string;

	number_of_digits = 0;
	number_two = 0;
	if (n < 0)
		number_two = n * -1;
	else
		number_two = n;
	number_of_digits = find_num_of_digits(n);
	final_string = (char *)malloc((sizeof(char) * number_of_digits) + 1);
	if (final_string == NULL)
		return (NULL);
	make_string(final_string, number_two, number_of_digits - 1, n);
	final_string[number_of_digits] = '\0';
	return (final_string);
}
