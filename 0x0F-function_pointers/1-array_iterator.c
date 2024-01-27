#include "function_pointers.h"

/**
*array_iterator - executes a function on every element of an array supplied
*@array: array supplied
*@size: size of array supplied
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

/*if the array is empty or action or function not stated, simply return*/
if (array == NULL || action == NULL)
return;

/*otherwise iterate action on every element starting from the first element indicated by the array pointer*/
while (size-- > 0)
{
action(*array);
array++;
}

}
