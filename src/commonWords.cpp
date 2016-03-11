/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
int split(char*, char [][SIZE]);
int length(char*);
int compare(char*, char*);
char ** commonWords(char *str1, char *str2) {
	char **s;
	char a1[SIZE][SIZE], a2[SIZE][SIZE];
	int len1[SIZE], len2[SIZE],l1,l2,i,j,ans[SIZE],check,k;
	if (str1 == NULL || str2 == NULL || str1[0] == '\0' || str2[0] == '\0')
	{
		return NULL;
	}
	l1=split(str1, a1);
	l2=split(str2, a2);
	for (i = 0; i <= l1; i++)
	{
		len1[i] = length(a1[i]);
	}
	for (i = 0; i <= l2; i++)
	{
		len2[i] = length(a2[i]);
	}
	k = 0;
	for (i = 0; i <= l1; i++)
	{
		for (j = 0; j <= l2; j++)
		{
			if (len1[i] == len2[j])
			{
				check = compare(a1[i], a2[j]);
				if (check == 1)
				{
					a2[j][0] = '\0';
					ans[k] = i;
					k++;
				}
			}
		}
	}
	s = (char**)calloc(k, SIZE*sizeof(char*));
	for (i = 0; i < k; i++)
	{
		
			s[i] = (a1[ans[i]]);
		
	}
	if (k == 0)
	{
		s = NULL;
	}
	return s;
}
int split(char s[31], char a[31][31])
{
	int i,j=0,k=0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			a[k][j] = s[i];
			j++;
		}
		else
		{
			a[k][j] = '\0';
			j = 0;
			k++;
		}
	}
	a[k][j] = '\0';
	return k;
}

int length(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++);
	return i;
}
int compare(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return 0;
		}
	}
	if (i == 0)
	{
		return 0;
	}
	return 1;
}