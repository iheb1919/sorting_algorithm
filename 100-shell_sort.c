#include "sort.h"

/**
 * shell_sort - shell sort items
 * @array: qrrqy index
 * @size: qrrqy index
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
for (int p = size/2; p > 0; p /= 2){
for (int i = p; i < size; i += 1) {
int temp = array[i];
int j;
for (j = i; j >= p && array[j - p] > temp; j -= p){
array[j] = array[j - p];
}
array[j] = temp;
}
}
}
