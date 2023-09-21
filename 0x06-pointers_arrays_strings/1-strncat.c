#include "main.h"

/**
 * *_strncat - concantenates two strings upto nth byte of source string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes of src to copy
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;   /* length of string dest */
	int len_src = 0;    /* length of string src */
	int i, j;            /* loop counter variables */

	for (; dest[len_dest] != '\0'; len_dest++)  /* finds length of dest */
		;

	for (; src[len_src] != '\0'; len_src++)     /* finds length of src */
		;

	if (len_src > n)                         /* copies src until nth byte */
	{
		for (i = 0; i < n;)
			dest[len_dest++] = src[i++];
	}

	else                                      /* copies the whole of src */
	{
		for (j = 0; src[j] != '\0';)
			dest[len_dest++] = src[j++];
	}

	dest[len_dest] = '\0';                 /* appends null byte at the end*/
	return (dest);
}
