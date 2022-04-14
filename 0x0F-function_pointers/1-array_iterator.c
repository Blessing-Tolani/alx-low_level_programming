#include "function_pointers.h"
/**
 * array_iterator - execute a funtion on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	int *myarray;
	unsigned long i;

	if (array == NULL || action == NULL)
		return;
	myarray = array;

	for (i = 0; i < size; i++)
	{
		action(myarray[i]);
	}
}
