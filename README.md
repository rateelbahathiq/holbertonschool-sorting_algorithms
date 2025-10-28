# Sorting Algorithms & Big O Project

This project implements a variety of classic sorting algorithms in C and analyzes their time complexities using Big O notation. It is part of the Holberton School low-level programming curriculum

~_~S~X Description

Sorting is one of the most fundamental operations in computer science. It is used in searching, data organization, and optimization. In this project, we explore multiple sorting algorithms, how they work, and their performance in different cases.

~_ Data Structure

-Arrays 
Most sorting algorithms operate on arrays of integers.

-Doubly Linked List
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

~_~S~B Files Overview
File Description
sort.h	Header file with structure definitions & prototypes
print_array.c	Utility function to print arrays
print_list.c	Utility function to print doubly linked lists
0-bubble_sort.c	Implements the Bubble Sort algorithm
1-insertion_sort_list.c	Insertion Sort for a doubly linked list
2-selection_sort.c	Implements Selection Sort
3-quick_sort.c	Implements Quick Sort (Lomuto partition)
0-O	Time complexity for Bubble Sort
1-O	Time complexity for Insertion Sort
2-O	Time complexity for Selection Sort
3-O	Time complexity for Quick Sort

~Z~Y~O Function Prototypes
/* sort.h */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size)



~_~Sorting Algorithms
🔸 Bubble Sort

File: 0-bubble_sort.c

Prototype: void bubble_sort(int *array, size_t size);

Description:
Repeatedly swaps adjacent elements if they are in the wrong order. It continues until the array is sorted.

Time Complexity:

Best Case: O(n)

Average Case: O(n²)

Worst Case: O(n²)

🔸 Insertion Sort (Doubly Linked List)

File: 1-insertion_sort_list.c

Prototype: void insertion_sort_list(listint_t **list);

Description:
Sorts a doubly linked list by building a sorted portion one node at a time.

Time Complexity:

Best Case: O(n)

Average Case: O(n²)

Worst Case: O(n²)

🔸 Selection Sort

File: 2-selection_sort.c

Prototype: void selection_sort(int *array, size_t size);

Description:
Finds the minimum element from the unsorted part and swaps it with the first unsorted element.

Time Complexity:

Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)

🔸 Quick Sort (Lomuto Partition Scheme)

File: 3-quick_sort.c

Prototype: void quick_sort(int *array, size_t size);

Description:
Uses a divide-and-conquer approach. It partitions the array and recursively sorts the subarrays using Lomuto partitioning.

Time Complexity:

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²)


~_~Big O Notation Files

Each sorting algorithm has an associated .O file that details its time complexity:

File	Best	Average	Worst
0-O	O(n)	O(n²)	O(n²)
1-O	O(n)	O(n²)	O(n²)
2-O	O(n²)	O(n²)	O(n²)
3-O	O(n log n)	O(n log n)	O(n²)

~_~R Example Usage

#include <stdio.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    bubble_sort(array, n);
    print_array(array, n);

    return (0);
}


~_~Q Authors

This project is part of the Holberton School curriculum on data structures and algorithms.

Team Members:

Thekra Alhenaki (thekra-alh)

Rateel Bahathiq (rateelbahathiq
)

~_~S~\ License

This project is intended for educational purposes as part of the Holberton School curriculum.i
