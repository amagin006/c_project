
#include <stdio.h>

int vc_isprint(int c)
{
	if (c > 31 && c < 128)
	{

		return 1;
	}

	return 0;

}