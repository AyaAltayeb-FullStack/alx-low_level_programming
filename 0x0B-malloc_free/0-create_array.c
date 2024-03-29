#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size
 * @c:  initialization
 * Return: pointer to the created  array or null
 **/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
