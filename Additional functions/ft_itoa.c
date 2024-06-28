#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void put_num_in_string(char *final_string, unsigned int number_two, int index)
{
	char digit;

	while (number_two > 0)
	{
		digit = (number_two % 10) + '0';
		final_string[index] = digit;
		index = index - 1;
		number_two = number_two / 10;
	}

}

char	*ft_itoa(int nbr)
{
	unsigned int number = 0;
	unsigned int number_two = 0;
	int number_of_digits = 0;
	char *final_string;


	if (nbr < 0)
	{
		number = nbr * -1;
		number_of_digits = 1;
	}
	else
		number = nbr;

	number_two = number;

	while (number >= 1)
	{
		number = number / 10;
		number_of_digits = number_of_digits + 1;
	}

	final_string = (char *)malloc((sizeof(char) * number_of_digits) + 1);

	if (nbr < 0)
		final_string[0] = '-';
	put_num_in_string(final_string, number_two, number_of_digits - 1);
	final_string[number_of_digits] = '\0';

	printf("%lu \n", strlen(final_string));

	return (final_string);

}

int main(void)
{
	// ft_itoa(123456);
	printf("%s \n", ft_itoa(72500));
}