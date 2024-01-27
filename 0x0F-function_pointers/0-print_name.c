#include "function_pointers.h"

/**
*print_name - prints the name detected
*@name:name to print
*@f: function which print name
*/

void print_name(char *name, void (*f)(char *))
{
/* if name or function not stated, simply return*/
if (name == NULL || f == NULL)
return;

/*otherwise print the name using the function*/
f(name);

}
