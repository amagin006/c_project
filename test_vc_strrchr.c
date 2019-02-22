
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>


static int sizeofArray(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}


char * test_vc_strrchr(char *s, int c)
{
	
	int size = sizeofArray(s);
	char *result = (char*)malloc(sizeof(char) * size);


	for (int i = size - 1 ; i >= 0 ; i--)
	{
		if (s[i] == c)
		{
			result = &s[i];
			return result;
		}

	}
	return NULL;

}

int main()
{
	char *s = "abcedfghijklnmopqrstuvwxyz";
	printf("%s", test_vc_strrchr(s, 122));
}



