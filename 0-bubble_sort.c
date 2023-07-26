#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in an ascending order using the bubble sort algorithm.
 *
 * @array: input array
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *arraY, size_t size)
{
	size_t i, n;
	int tmp, swap;

	for (n = size, swap = 1; n >0 && awap; n--)
	{
		swap =o;
		for (i =0; (i = 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
