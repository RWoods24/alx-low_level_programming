#include "main.h"

/**
 *_islower - this checks for lower case letters
 *c - this the character to be used
 *Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
