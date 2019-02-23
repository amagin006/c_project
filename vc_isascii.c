
#include <stdio.h>

int vc_isascii(int c)
{
	if (c > 0 && c < 128)
	{

		return 1;
	}

	return 0;

}