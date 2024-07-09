/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:13:23 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 12:13:24 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	find_start(char const *s1, char const *set, int l_one, int l_two)
{
	int		start;
	int		j;
	int		flag;

	start = 0;
	j = 0;
	flag = 0;
	while (start < l_one)
	{
		while (j < l_two)
		{
			if (s1[start] == set[j])
			{
				flag = 1;
				break ;
			}
			j += 1;
		}
		if (flag == 0)
			break ;
		j = 0;
		flag = 0;
		start += 1;
	}
	return (start);
}

static	int	find_end(char const *s1, char const *set, int l_one, int l_two)
{
	int		end;
	int		j;
	int		flag;

	end = l_one - 1;
	j = 0;
	flag = 0;
	while (end >= 0)
	{
		while (j < l_two)
		{
			if (s1[end] == set[j])
			{
				flag = 1;
				break ;
			}
			j += 1;
		}
		if (flag == 0)
			break ;
		j = 0;
		flag = 0;
		end -= 1;
	}
	return (end);
}

static void	create_string(char *return_ptr, int start, int end, char const *s1)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		return_ptr[i] = s1[start];
		i += 1;
		start += 1;
	}
	return_ptr[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*return_ptr;
	int		start;
	int		end;
	int		str_length;
	int		set_length;

	str_length = ft_strlen(s1);
	set_length = ft_strlen(set);
	start = find_start(s1, set, str_length, set_length);
	if (start == str_length)
	{
		return_ptr = (char *)malloc(1);
		if (return_ptr == NULL)
			return (NULL);
		return_ptr[0] = '\0';
		return (return_ptr);
	}
	end = find_end(s1, set, str_length, set_length);
	return_ptr = (char *)malloc((sizeof(char) * (end - start + 1)) + 1);
	if (return_ptr == NULL)
		return (return_ptr);
	create_string(return_ptr, start, end, s1);
	return (return_ptr);
}
// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strtrim("---hello---", "-"));
// }
