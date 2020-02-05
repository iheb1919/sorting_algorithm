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

for (p = (int)size/2; p > 0; p /= 2){
for (i = p; i < size; i += 1) {
int temp = array[i];
int k;
for (k = i; k >= p && array[k - p] > temp; k -= p){
array[k] = array[k - p];
}
array[k] = temp;
}
print_array(array, size);
}
}
