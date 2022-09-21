#include "main.h"

/**
 * rot13 - rot13 encoder
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - helper function to map a letter with it's rot13 encoding
 * @x: chaar to be encoded
 *
 * Return: the encoded char
 */

char transform_2(cahr x)
{
	char one[52] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "MNOPQRSTUVWXYZABCDEFGHIJKLmnopqrstuvwxyzabcdefghijkl";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == 0ne[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
