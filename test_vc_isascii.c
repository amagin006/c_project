
//#include "pch.h"
#include <stdio.h>

int test_vc_isascii(int c)
{
	if (c > 0 && c < 128)
	{
		printf("%d", 1);

		return 1;
	}
	printf("%d", 0);

	return 0;

}
