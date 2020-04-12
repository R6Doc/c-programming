#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1.
 * @n: number
 * @index: index to set bit
 * Return: 1 or -1 if error XD LOL
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = 1 << index;
*n = *n | set;
return (1);
}
