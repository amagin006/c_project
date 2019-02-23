
#include <stdio.h>



int vc_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		printf("%c", c - 32);
		return c -32;
	}
	else if (c >= 65 && c <= 90)
	{
		printf("%c", c);
		return c;
	}
	printf("%d", 0);
	return 0;
}
void test_vc_toupper()
{
	vc_toupper(65);
}
