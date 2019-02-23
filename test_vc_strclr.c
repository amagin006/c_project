
#include <stdio.h>


static int sizeofArray(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

void vc_strclr(char *s)
{
	int size = sizeofArray(s);
	char *new = &s;


	for (int i = 0; i < size; i++)
	{
		new[i] = NULL;
	}

}


void test_vc_strclr()
{
	char *s = "hello";
	vc_strclr(s);
}
