#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *final_string;
	int i;
	int j;
	int final_length;
	int length_one;
	int length_two;

	final_string = NULL;
	i = 0;
	j = 0;
	final_length = 0;
	length_one = 0;
	length_two = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (char*)s2;
	else if (s2 == NULL)
		return (char*)s1;

	length_one = strlen(s1);
	length_two = strlen(s2);
	final_length = length_one + length_two;

	final_string = (char *)malloc((sizeof(char) * final_length) + 1);
	if (final_string == NULL)
		return (final_string);

	while (i < final_length)
	{
		while (j < length_one)
		{
			final_string[i] = s1[j];
			i = i + 1;
			j = j + 1;
		}

		j = 0;
		while (j < length_two)
		{
			final_string[i] = s2[j];
			i = i + 1;
			j = j + 1;
		}
		final_string[i] = '\0';
	}

	return final_string;
}

