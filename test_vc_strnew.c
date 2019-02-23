
// #include "pch.h"
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
		printf(NULL);
		return NULL;
	}
	printf("%s", ptr);
	return ptr;
}

void test_vc_strnew()
{

	vc_strnew(20);

}