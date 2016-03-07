/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	float num=number;
	int n,i,j=0,temp,k,negative=0;
	char c;
	for (i = 1; i <= afterdecimal; i++)
	{
		num = num * 10;
	}
	n = (int)num;
	if (n < 0)
	{
		n = n*-1;
		negative = 1;
	}
	while (n != 0)
	{
		
		temp = n % 10;
		str[j] = temp + '0';
		n = n / 10;
		j++;
		if (j == afterdecimal)
		{
			str[j] ='.';
			j++;
		}
	}
	while (j <= (afterdecimal+1)&&afterdecimal!=0)
	{
		if (j<afterdecimal||j>afterdecimal)
		{
			str[j] = '0';

		}
		
		if (j == afterdecimal)
		{
			str[j] = '.';
			
		}
		j++;
	}
	if (negative == 1)
	{
		str[j] = '-';
		j++;
	}
	str[j] = '\0';

	for (i = 0, k = j - 1; i < k; i++, k--)
	{
		c = str[i];
		str[i] = str[k];
		str[k] = c;
	}

	

}
