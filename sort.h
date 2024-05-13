#ifndef SORT_H
#define SORT_H

#include <stddef.h>
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *array, int *a, int *b, size_t size);
int partition(int *array, int start, int end, size_t size);
void quickSort(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int arr_max(int *array, size_t size);
void counting_sort(int *array, size_t size);
void print_left_right(int *array, int size, int first, int mid);
void merge(int *array, int size, int first, int mid, int *cpy);
void mergeSort(int *cpy, int first, int size, int *array);
void copy_array(int *arr, int *cpy, int size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void build_max_heap(int *array, size_t size);
void heapify(int *array, size_t size, size_t heapSize, size_t parentIndex);
void swap_nodes(int *array, size_t size, size_t indexA, size_t indexB);
void counting_sort_2(int *array, size_t size, int d);
void radix_sort(int *array, size_t size);
void order(char arr, int *array, size_t size);
void merge_array(char arr, int *array, size_t size);
void bitonic_recursive(char arr, int *array, size_t size, size_t i);
void bitonic_sort(int *array, size_t size);
int partition_h(int *array, int first, int last, size_t size);
void qsh(int *array, int first, int last, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
