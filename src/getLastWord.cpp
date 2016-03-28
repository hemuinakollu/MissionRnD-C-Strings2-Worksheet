/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	else
	{
		int i = 0, j = 0, k = 0, len = 0, l = 0, flag = 0;
		while (str[i] != '\0'){
			len++;

			i++;
		}
		char *sub = (char*)malloc(100);

		for (i = len - 1; i >= 0; i--)
		{
			if (str[i] == ' ')
				continue;
			else
				break;
		}
		l = i;
		for (i = 0; i <= l; i++)
		{
			if (str[i] == ' ')
			{
				flag = 1;
				j = i;
			}


		}
		if (flag == 1)
			j = j + 1;
		while (j <= l)
		{
			sub[k] = str[j];
			k++;
			j++;
		}
		sub[k] = '\0';
		return sub;
	}
}
