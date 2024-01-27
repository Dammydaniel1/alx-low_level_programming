#include "function_pointers.h"

/**
*int_index - searches for integer
*@array: Array containing several elements
*@size:total number of elements in array
*@cmp: function which compare values
*
*Return: returns -1 if no element is present in the array or no integer match
*return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
/*initial declaration of index, to be used in for statement*/
int index = 0;

/*if empty or no camparing function included, return pointer to the first corresponding element of the array*/
if (array == NULL || cmp == NULL)
return (-1);

/*iterate the comparison function through every member of the array*/
for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
