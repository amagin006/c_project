
#include <stdio.h>

int vc_isprint(int c)
{
	if (c > 31 && c < 128)
	{
		printf("%d", 1);

		return 1;
	}
	printf("%d", 0);
	return 0;

}

void test_vc_isprint(){
	vc_isprint(20);
}
