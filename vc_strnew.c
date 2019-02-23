#include <stdio.h>

char *vc_strnew(size_t size)
{
	char *ptr = (char*) malloc(sizeof(char) * size);
	if (ptr != NULL) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] = NULL;
		}
	}
	else {
		return NULL;
	}
	return ptr;
}