#ifndef name
#define name

/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}

#endif
