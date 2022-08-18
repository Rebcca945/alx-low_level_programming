#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int n;
char *ch;

n = 1;
ch = (char *) &n;

return ((int)*ch);
}
