#include "main.h"

/**
 * _strcpy - Copia una cadena (src) en otra (dest).
 * @dest: La cadena de destino.
 * @src: La cadena de origen.
 * Return: Un puntero a la cadena de destino.
 */

char *_strcpy(char *dest, char *src)
{
	int largocadena = 0;
	int x = 0;

	while (*(src + largocadena) != '\0')
	{
	largocadena++;
	}
	for ( ; x < largocadena ; x++)
	{
	dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
