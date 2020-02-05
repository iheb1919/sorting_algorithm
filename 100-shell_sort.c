#include "sort.h"

/**
 * shell_sort - shell sort items
 * @array: qrrqy index
 * @size: qrrqy index
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
int p = 1, i, temp;

while (p < (int)(size))
p = (3 * p) + 1;
for (p = (p - 1) / 3; p > 0; p = (p - 1) / 3)
{
for (i = p; i < (int)size; i += 1)
{
temp = array[i];
int k;
for (k = i; k >= p && array[k - p] > temp; k -= p){
array[k] = array[k - p];
}
array[k] = temp;
}
print_array(array, size);
}
}
