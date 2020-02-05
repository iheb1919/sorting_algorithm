#include "sort.h"

/**
 * shell_sort - shell sort items
 * @array: qrrqy index
 * @size: qrrqy index
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
int gap = 1, i, temp;

while (gap < (int)(size))
gap = (3 * gap) + 1;
for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
{
for (i = gap; i < (int)size; i += 1)
{
temp = array[i];
int k;
for (k = i; k >= gap && array[k - p] > temp; k -= gap){
array[k] = array[k - gap];
}
array[k] = temp;
}
print_array(array, size);
}
}
