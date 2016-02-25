/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *ans;
	int index1 = 0, index2 = 0, i, j;
	int flag = 1, lastindex = -1;
	if (str == NULL || str[0] == '\0')
	{
		return "";
	}
	while (str[index2] == ' ')
		index2++;
	while (str[index2] != '\0')
	{
		if (str[index2] != ' ' && flag)
		{
			index1 = index2;
			flag = 0;
		}
		if (str[index2 + 1] == ' ' || str[index2 + 1] == '\0' || str[index2 + 1] == '\t')
		{
			lastindex = index2;
			while (str[index2 + 1] == ' ' || str[index2 + 1] == '\t')
			{
				index2++;
			}
			flag = 1;
		}
		index2++;
	}
	if (lastindex < 0)
		return "";
	ans = (char*)malloc(sizeof(char)*(lastindex - index1 + 1));
	for (i = index1, j = 0; i <= lastindex; i++, j++)
	{
		ans[j] = str[i];
	}
	ans[j] = '\0';
	return ans;
}
