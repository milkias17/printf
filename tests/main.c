#include <stdio.h>
#include "../main.h"
int main (int argc, char *argv[])
{
	int len = _printf("Hello, World\n");
	printf("Length was %i\n", len);
	return 0;
}
