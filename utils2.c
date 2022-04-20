#include "main.h"

/**
	* toBinary - converts a decimal to a binary
	* @num: number to convert to binary
	* Description: converts a decimal to a binary
	* Return: int
*/
int toBinary(unsigned int num)
{
	long binaryNum = 0;
	int rem;
	int base = 1;

	while (num != 0)
	{
		rem = num % 2;
		binaryNum += rem * base;
		base *= 10;
		num = num / 2;
	}

	return (binaryNum);
}
