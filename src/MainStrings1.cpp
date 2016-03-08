/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include "FunctionHeadersStrings1.h"

int main(){

	//Test KthIndexFromEnd 

	//TestNumbertoStr

	//removeSpaces

	//StrWordsinRev
	char input[100] = "missionrnd    is    great";
	char output[100] = "great    is    missionrnd";
	int len = 25;
	int i = 0;
	str_words_in_rev(input, len);
	//commonWords


	return 0;
}