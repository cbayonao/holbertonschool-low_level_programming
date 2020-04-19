#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * recursive_binary - search recursive with dinamic mid value.
 * @array:  is a pointer to the first val of the array to search.
 * @value: is the value to search for.
 * @lo: size_t lowest.
 * @hi: size_t highest.
 * Return: int value or -1 if not found.
 */
int recursive_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_arr(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);
	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (recursive_binary(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (recursive_binary(array, value, mid + 1, hi));
	else
		return (-1);
}
/**
 * print_arr - prints
 * @array: is a pointer to the first element
 * of the array to search.
 * @lo: index of the low bound
 * @hi: index of the high bound
 */
void print_arr(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the value, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, value, 0, size - 1));
}
