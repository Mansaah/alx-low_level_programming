#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Function that concatnates two strings
 * @s1: destination file
 * @s2: source file
 * @n: int type for size of byte
 * Return: returns a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int tracker1, tracker2;
	int sign = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (tracker1 = 0; tracker1 < len1; tracker1++)
	{
		ptr[tracker1] = s1[tracker1];
	}
	for (tracker2 = 0; tracker2 < sign; tracker2++)
	{
		ptr[tracker1++] = s2[tracker2];
	}
	ptr[tracker1++] = '\0';
	return (ptr);
}
