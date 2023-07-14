#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: specific size
 * @c: variable
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)

{
	if (size == 0)
	return (NULL);

	char *s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (unsigned int i = 0; i < size; i++)
	s[i] = c;

	s[size] = '\0';
	return (s);
}
