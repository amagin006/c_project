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


char *vc_strtrim(char const *s) {
	
	int size = sizeofArray(s);
	int newP = 0;
	char *new = (char*)malloc(sizeof(char) * size);
	if (new != NULL) {
		for (int i = 0; i < size; i++)
		{
			if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			{
				new[newP] = s[i];
				newP++;
			}
		}
	}
	else {
		printf("NULL");
		return NULL;
	}
	new[newP] = '\0';
	printf("%s", new);
	return new;
}

void test_vc_strtrim()
{
	char *s = "hello";
	vc_strtrim(s);
}