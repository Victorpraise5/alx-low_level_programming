#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 *           overwriting the terminating null byte at the end
 *           of dest, then adds a terminating null byte
 * @src: first string
 * @dest: second string
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	for (; dest[len_dest] != '\0'; len_dest++)
		;

	for (; src[len_src] != '\0' ;)
		dest[len_dest++] = src[len_src++];

	dest[len_dest] = '\0';
	return (dest);
}
