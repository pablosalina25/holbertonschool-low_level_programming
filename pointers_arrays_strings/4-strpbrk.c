#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: set of bytes to search for
 * Return: pointer to the byte in `s` that matches one of the bytes in `accept`
 */
char *_strpbrk(char *s, char *accept)
{
	int aceptar_mapa[256] = {0};

	while (*accept)
	{
	aceptar_mapa[(unsigned char)*accept] = 1;
	accept++;
	}
	while (*s)
	{
	if (aceptar_mapa[(unsigned char)*s] == 1)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
