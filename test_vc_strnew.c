
#include "pch.h"
#include <stdio.h>

char *test_vc_strnew(size_t size)
{
	char *ptr = (char*) malloc(sizeof(char) * size);
	if (ptr != NULL) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] = NULL;
		}
	}
	else {
		printf(NULL);
		return NULL;
	}
	printf("%s", ptr);
	return ptr;
}