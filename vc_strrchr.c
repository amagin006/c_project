
#include "pch.h"
#include <stdio.h>


static int sizeofArray(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}


char *strrchr(const char *s, int c)
{
	
	int size = sizeofArray(s);
	char *result;

	for (int i = size; i >= 0 ; i--)
	{
		if (s[i] = c)
		{
			result = &s[i];
			return result;
		}

	}
	return NULL;
	
	


}

