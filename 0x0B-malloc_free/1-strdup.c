#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to the new location that has a copy of the string
 * @str: the string to be copied
 * Return: pointer to the new string location or null
 **/
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
