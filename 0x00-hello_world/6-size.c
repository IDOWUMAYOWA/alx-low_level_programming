#include <stdio.h>
/**
 * main - prin the string in put function
 *
 * Description: using the main function
 * this program print "programmming is like multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of a int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long: %1d byte(s)\n", sizeof(li));
	printf("Size of a long long: %1d byte(s)\n", sizeof(lli));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
