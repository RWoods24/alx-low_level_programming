#include <stdio.h>

/**
 * main - this is a function
 * Return: always zero whenever it's succesful
*/
int main(void)
{
printf("Size of a char: %ld byte(s)", sizeof(char));
printf("Size of an int: %li byte(s)", sizeof(int));
printf("Size of long int: %li byte(s)", sizeof(long int));
printf("Size of a long long int: %li byte(s)", sizeof(long long int));
printf("Size of float: %ld byte(s)", sizeof(float));
return (0);
}
