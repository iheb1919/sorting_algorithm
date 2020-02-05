#include "sort.h"

/**
 * swap - swap items
 * @a: qrrqy index 
 * @b: qrrqy index
 *
 * Return: void
 */


void swap(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}


/**
 * partition - bring the pivot to its aprpiate position
 * left of the pivot is smaller and right in greater.
 * @array: pointer to array
 * @low: smallest index
 * @hight: righer index
 * Return: pivot
 */


int partition(int *array, int low, int hight, size_t size)
{
int pivot = array[hight], j = low, i;
for (i = low; i < hight; i++)
{
if (array[i] < pivot)
{
if (j != i)
{
swap(&array[j], &array[i]);
print_array(array, size);
}
j++;
}
}
if (hight != j && array[hight] != array[j])
{
swap(&array[hight], &array[j]);
print_array(array, size);
}
return (j);
}


/**
 * quicksort - sort the integers between the pivot
 * @array: pointer to array
 * @low: smallest index
 * @hight: righer index
 */


void quicksort(int *array, int low, int hight, size_t size)
{
int pivot;
if (low < hight)
{
pivot = partition(array, low, hight, size);
quicksort(array, low, pivot - 1 , size);
quicksort(array, pivot + 1, hight, size);
}
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: pointer to array
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
