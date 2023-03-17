#include <stdio.h>
/**
*main - print out sizes of data types in C
*code by soukaina
*Return: 0
*/
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of a int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)",sizeof(lon long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
