
#include "pch.h"
#include <stdio.h>

int test_vc_isascii(int c)
{
	if (c > 0 && c < 128)
	{

		return 1;
	}

	return 0;

}


int main()
{
	printf("%d",test_vc_isascii(1));
}