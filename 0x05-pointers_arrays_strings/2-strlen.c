#include "main.h"

/**
 * _strlen - main function
 * @s: - function parameter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	return (count);
}
