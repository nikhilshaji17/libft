#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// If the entire array has to be deallocated because one string goes wrong, what do I do to safety check the entire array? - 
// I deallocate all the pointers within the final array using free, and point the final array to NULL. When we come back to the main function, if
// the final array points to NULL, then I free it and return back to main

static void free_memory(char **final_array, int index_final_array);
static int count_number_of_strings(char *str, char c);
static void malloc_string_space(char **final_array, char *str, char c);
static void assign_each_char(char **final_array, char *str, char c);

char **ft_split(char const *s, char c)
{
	char **final_array;
	int number_of_strings;

	number_of_strings = 0;
	number_of_strings = count_number_of_strings((char*)s, c);

	final_array = malloc(sizeof(char *) * (number_of_strings + 1));

	if (final_array == NULL)
		return (NULL);

	final_array[number_of_strings] = NULL;
	malloc_string_space(final_array, (char *)s, c);

	if (final_array == NULL)
	{
		free(final_array);
		return (NULL);
	}
	assign_each_char(final_array, (char *)s, c);

	return (final_array);
}

static void assign_each_char(char **final_array, char *str, char c)
{
	int i;
	int j;
	int index_final_array;

	i = 0;
	j = 0;
	index_final_array = 0;

	while (str[i] != '\0')
	{
		while (str[i] == c)
			i = i + 1;

		if (str[i] == '\0')
			return ;
		else
		{
			while (str[i] != c && str[i] != '\0')
			{
				final_array[index_final_array][j] = str[i];
				j += 1;
				i += 1;
			}
			index_final_array += 1;
			j = 0;
		}
	}
}

static void free_memory(char **final_array, int index_final_array)
{
	int i;

	i = index_final_array;
	while (i >= 0)
	{
		free(final_array[i]);
		i = i - 1;
	}
	final_array = NULL;
}

static int count_number_of_strings(char *str, char c)
{
	int i;
	int number_of_strings;

	i = 0;
	number_of_strings = 0;

	while (str[i] != '\0')
	{
		while (str[i] == c)
			i = i + 1;

		if (str[i] == '\0')
			return (number_of_strings);
		else
			number_of_strings += 1;

		while (str[i] != c && str[i] != '\0')
			i = i + 1;
	}
	return (number_of_strings);
}

static void malloc_string_space(char **final_array, char *str, char c)
{
	int index_final_array;
	int i;
	int length_of_current_string;

	i = 0;
	index_final_array = 0;
	length_of_current_string = 0;

	while (str[i] != '\0')
	{
		while (str[i] == c)
			i = i + 1;
		
		if (str[i] == '\0')
			return ;
		else
		{
			while (str[i] != c && str[i] != '\0')
			{
				length_of_current_string += 1;
				i += 1;
			}
			final_array[index_final_array] = (char *)malloc(sizeof(char) * length_of_current_string + 1);
			
			if (final_array[index_final_array] == NULL)
			{
				free_memory(final_array, index_final_array);
				return ;
			}
			final_array[index_final_array][length_of_current_string] = '\0';
			index_final_array += 1;
			length_of_current_string = 0;
		}
	}
}


// int main(void)
// {
// 	char str[] = "Hello,my,name,is";
// 	char c = ',';
// 	char **final_ptr = ft_split(str, c);
// 	int i = 0;
// 	while(final_ptr[i])
// 	{
// 		printf("%s -> %d\n", final_ptr[i], strlen(final_ptr[i]));
// 		i = i + 1;
// 	}

// }