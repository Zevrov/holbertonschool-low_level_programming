#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <string.h>
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

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void kwik_e_sort(int *array, size_t size, int first, int last);
int lomuto(int *array, size_t size, int first, int last);
void hoare_sort(int *array, size_t size, size_t first, size_t last);
void quick_sort_hoare(int *array, size_t size);
void swapi(listint_t *node);

#endif /* sort.h */
