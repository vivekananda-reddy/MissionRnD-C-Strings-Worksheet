/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	char a[100][100];
	int spaces[100] = { 0 }, i, j = 0, k = 0, alen,count=1,index;
	
	for (i = 0; i <= len; i++)
	{
		if (input[i] != ' ')
		{
			a[j][k]= input[i];
			k++;
			count = 1;
			continue;

		}
		else if (count==1)
		{
			a[j][k] = '\0';
			j++;
			k = 0;
		}
		spaces[j-1]++;
		count = 0;
	}
	alen = j;
	k = 0;
	index = 0;
	for (i = alen; i >=0; i--)
	{
		for (j = 0; a[i][j] != '\0'; j++,index++)
		{
			input[index] = a[i][j];
		}
	
		while (spaces[k] != 0&&k<alen)
		{
			input[index] = ' ';
			index++;
			spaces[k]--;
		}
		k++;
	}
	input[index] = '\0';

	
}
