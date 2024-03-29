#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_values(int *xp, int *yp);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort_helper(int *array, int low, int high);
int lomuto_partition(int *array, size_t size, int left, int right);
void shell_sort(int *array, size_t size);
void merge(int *array, size_t left, size_t mid, size_t right, int *temp);
void merge_sort_recursive(int *array, size_t left, size_t right, int *temp);
void merge_sort(int *array, size_t size);
void sift_down(int *array, size_t start, size_t end, size_t size);
void heap_sort(int *array, size_t size);


#endif
