#include "main.h"

/**
 *_strcpy - copy stringat the end of another string including \0.
 *@dest: pointer to string to be copied to.
 *@src: pointer to string to be copied .
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
