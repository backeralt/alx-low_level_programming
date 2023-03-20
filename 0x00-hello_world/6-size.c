#include <stdio.h>
/**
 * main - entering start
 *
 Description: C program that prints the size of various types
 *
 * Return: Always 0
 */

int main(void)
{
	char character;
	int intiger;
	long int l_intiger;
	long long int ll_int;
	float float_num;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intiger));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l_intiger));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll_int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float_num));

	return (0);
}
