#include <stdio.h>
/**
 * main - entering start
 * description: file size
 * return: 0
 */

int main(void)
{
	char character;
	int intiger;
	long int long_intiger;
	long long int long_long_integer;
	float float_num;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intiger));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_intiger));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long_long_integer));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float_num));

	return (0);
}
