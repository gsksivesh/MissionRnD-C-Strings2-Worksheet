/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int length_of_string(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
char * get_sub_string(char *str, int i, int j)
{
	char * ans;
	int length_str, index_ans;
	if (str == NULL || str[0] == '\0')
		return NULL;
	length_str = length_of_string(str);
	if (i < 0 && j < 0)
	{
		return NULL;
	}
	if (i > length_str && j > length_str)
	{
		return NULL;
	}
	if (i > j)
	{
		return NULL;
	}
	if (i < 0)
		i = 0;
	if (j >= length_str)
		j = length_str - 1;
	ans = (char*)malloc(sizeof(char)*(j - i + 1));
	for (index_ans = 0; i <= j; i++, index_ans++)
	{
		ans[index_ans] = str[i];
	}
	ans[index_ans] = '\0';
	return ans;
}
