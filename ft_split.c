/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:02:02 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/04 14:02:04 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char c);
static char	**string_spaces(char **final_array, char const *s, char c);
static int	check_nulls(char **final_array, int index);
static char	**insert_chars(char **final_array, char const *s, char c);

static char	**insert_chars(char **final_array, char const *s, char c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i += 1;
		if (s[i] == '\0')
			return (final_array);
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			final_array[index][j] = s[i];
			i += 1;
			j += 1;
		}
		final_array[index][j] = '\0';
		index += 1;
	}
	return (final_array);
}

static int	check_nulls(char **final_array, int index)
{
	int	i;

	i = 0;
	if (final_array[index] == NULL)
	{
		while (i <= index)
		{
			free(final_array[i]);
			i += 1;
		}
		free(final_array);
		return (1);
	}
	return (0);
}

static char	**string_spaces(char **final_array, char const *s, char c)
{
	int	length;
	int	i;
	int	index;

	i = 0;
	length = 0;
	index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i += 1;
		if (s[i] == '\0')
			return (final_array);
		length = 0;
		while (s[i] != c && s[i] != '\0')
		{
			length += 1;
			i += 1;
		}
		final_array[index] = (char *)malloc(sizeof(char) * (length + 1));
		if (check_nulls(final_array, index))
			return (NULL);
		index += 1;
	}
	return (final_array);
}

static int	count_strings(char const *s, char c)
{
	int	num_of_strings;
	int	i;

	num_of_strings = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i += 1;
		if (s[i] == '\0')
			return (num_of_strings);
		num_of_strings += 1;
		while (s[i] != c && s[i] != '\0')
			i += 1;
	}
	return (num_of_strings);
}

char	**ft_split(char const *s, char c)
{
	char	**final_array;
	int		num_of_strings;

	num_of_strings = count_strings(s, c);
	final_array = malloc(sizeof(char *) * (num_of_strings + 1));
	if (final_array == NULL)
		return (NULL);
	final_array[num_of_strings] = NULL;
	final_array = string_spaces(final_array, s, c);
	if (final_array == NULL)
		return (NULL);
	final_array = insert_chars(final_array, s, c);
	return (final_array);
}
