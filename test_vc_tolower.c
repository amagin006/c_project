
#include "pch.h"
#include <stdio.h>

int test_vc_tolower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return c;
	}
	else if (c >= 65 && c <= 90)
	{
		return c + 32;
	}
	return 0;
}

int main()
{
	printf("%c", test_vc_tolower(65));
}