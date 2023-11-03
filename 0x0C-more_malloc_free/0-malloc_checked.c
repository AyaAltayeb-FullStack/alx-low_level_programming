#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory
 * @b: size 
 * Return: a pointer to allocated memory or 98
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
