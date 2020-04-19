#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary(int *array, int value, size_t lo, size_t hi);
void print_arr(int *array, size_t lo, size_t hi);
#endif
