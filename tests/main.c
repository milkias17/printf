#include <stdio.h>
#include "../main.h"
int main (int argc, char *argv[])
{
	/* int len = _printf("Hello, World\n"); */
	/* printf("Length was %i\n", len); */
	/* len = _printf("Hell%c, %corld\n", 'o', 'W'); */
	/* printf("Length was %i\n", len); */
	/* len = printf("Hell%c, %corld\n", 'o', 'W'); */
	/* printf("Length was %i\n", len); */
	/* len = printf("Hello, %s\n", "World"); */
	/* printf("Length was %i\n", len); */
	_printf("Hello, %s\n", "World");
	_printf("Number is %i\n", 9000);
	return 0;
}
