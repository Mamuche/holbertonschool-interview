#include <stddef.h>


#ifndef SORT
#define SORT


void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);
void sort_number(int *array, size_t size, int sig);
int number_max(int *array, size_t size);


#endif
