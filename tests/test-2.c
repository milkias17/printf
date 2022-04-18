#include "../main.h"
#include <stdio.h>

int main ()
{
	int len;
	int len2;

	len = _printf("%\n");
	len2 = printf("%\n");

	printf("Length: [%i, %i]\n", len, len2);
	return 0;
}
