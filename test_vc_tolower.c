
//#include "pch.h"
#include <stdio.h>

int vc_tolower(int c)
{
	if (c >= 97 && c <= 122)
	{
		printf("%c", c );
		return c;
	}
	else if (c >= 65 && c <= 90)
	{
		printf("%c", c +32);
		return c + 32;
	}
	printf("%d", 0);
	return 0;
}


void test_vc_tolower()
{
	vc_tolower(88);
}