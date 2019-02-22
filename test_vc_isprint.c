
#include "pch.h"
#include <stdio.h>

int test_vc_isprint(int c)
{
	if (c > 31 && c < 128)
	{
		printf("%d", 1);

		return 1;
	}
	printf("%d", 0);
	return 0;

}

int main()
{
	printf("%d", test_vc_isascii(1));
}