#include <stdlib.h>
#include <stdio.h>

int count_number_of_strings(char *str, int number_of_strings)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		{
			while (i == 0 || str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			{
				i = i + 1;
			}
			number_of_strings += 1;
		}
		i = i + 1;
	}
	return (number_of_strings + 1);
}

int malloc_string_space(char **final_array, int index_final_array, char *str, int i)
{
	int j;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		{
			i = i + 1;
		}
		j = 0;
		while (str[i] != 32 && (str[i] < 9 || str[i] > 13))
		{
			j++;
			i++;
		}
		final_array[index_final_array] = malloc((j+1) * sizeof(char));
		index_final_array++;
	}
}

char **ft_split(char *str)
{
	int number_of_strings = 0;
	int **final_array;
	int index_final_array = 0;
	int i = 0;

	number_of_strings = count_number_of_strings(str, number_of_strings);
	final_array = malloc((sizeof(char*) * (number_of_strings)) + 1);

	final_array[number_of_strings] = NULL;

	while (final_array[index_final_array])
	{
		i = malloc_string_space(final_array, index_final_array, str, i);
		index_final_array += 1;
	}

}

// int main(void)
// {
// 	ft_split("Hi there   boy   Kazakh");
// }