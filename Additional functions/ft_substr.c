#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int index;
	unsigned int subIndex;
	size_t length;

	substr = NULL;
	index = start;
	subIndex = 0;
	length = 0;

	if (s == NULL)
		return (substr);
	else if (strlen(s) < start)
		return (substr);

	while (s[index] != '\0')
	{
		length = length + 1;
		index = index + 1;
	}

	if (length < len)
		len = length;

	substr = (char *)malloc((sizeof(char) * len) + 1);
	if (substr == NULL)
		return (substr);

	index = start;
	while(s[index] != '\0' && subIndex < (unsigned int)len)
	{
		substr[subIndex] = s[index];
		index = index + 1;
		subIndex = subIndex + 1;
	}
	substr[subIndex] = '\0';
	return (substr);	
}
