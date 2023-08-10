#include <stdio.h>

/**
 * main - this is a function
 * Return: always zero whenever it's succesful
*/
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of long int: %lu byte(s)", sizeof(long int));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}
