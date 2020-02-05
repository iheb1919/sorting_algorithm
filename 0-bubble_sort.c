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
int aux, x = 1;
size_t  j;
if (array == NULL)
return;
while (x == 1)
{
x = 0;
for (j = 0; j < size - 1; j++)
{
if (array[j + 1] < array[j])
{
aux = array[j + 1];
array[j + 1] = array[j];
array[j] = aux;
print_array(array, size);
x = 1;
}
}
}
}
