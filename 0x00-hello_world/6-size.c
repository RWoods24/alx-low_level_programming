#include <stdio.h>

/**
 * main - this is a function
 * Return: always zero whenever it's succesful
*/
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %li byte(s)\n", sizeof(int));
printf("Size of long int: %li byte(s)\n", sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
