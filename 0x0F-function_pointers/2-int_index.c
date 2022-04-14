#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function used
 * Return: an integer
 */
int int_index(int *array, size_t size, void (*cmp)(int))
{
	int *myarray = array, i, ans;

	if (size <=  0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ans = cmp(myarray[i]);

		if (ans)
			return (i);
	}

	return (-1);
}
