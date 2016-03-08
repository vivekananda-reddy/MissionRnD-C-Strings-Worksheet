/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stddef.h>
void deletespaces(char*, int);
char removeSpaces(char *str) {
	int i, j;
	if (str == NULL || str[0] == '\0')
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			deletespaces(str, i);
			break;
		}
	}
}

void deletespaces(char* a, int j)
{
	int i=j+1;
	while (a[i] != '\0')
	{
		if (a[i] != ' ')
		{
			a[j] = a[i];
			j++;
		}
		i++;
	}
	a[j] = '\0';
}