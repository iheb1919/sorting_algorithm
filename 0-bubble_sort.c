#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - function hat sorts an array of integers in ascending order
 * @array: pointer
 * @size: size_t
 */

void bubble_sort(int *array, size_t size)
{
int aux;
size_t i, j;
for (i = size - 1; i > 0; i--)
{
for (j = 0; j < i; j++)
{
if (array[j + 1] < array[j])
{
aux = array[j + 1];
array[j + 1] = array[j];
array[j] = aux;
print_array(array, size);
}
}
}
}
