# 🔢 C - Sorting Algorithms & Big O

This project implements a variety of classic sorting algorithms in C and analyzes their time complexities using Big O notation. It is part of the Holberton School low-level programming curriculum.

---

## 📘 Description

Sorting is one of the most fundamental operations in computer science. It is used in searching, data organization, and optimization. In this project, we explore multiple sorting algorithms, how they work, and their performance in different cases.

---

## 🧱 Data Structures

### ➕ Arrays

Most sorting algorithms operate on arrays of integers.

### 🔁 Doubly Linked List

Used for `insertion_sort_list`, the list node is defined as:

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
📂 Files Overview
File	Description
sort.h	Header file with structure definitions and prototypes
print_array.c	Utility function to print an array
print_list.c	Utility function to print a doubly linked list
0-bubble_sort.c	Implements the Bubble Sort algorithm
1-insertion_sort_list.c	Implements Insertion Sort for doubly linked list
2-selection_sort.c	Implements Selection Sort
3-quick_sort.c	Implements Quick Sort using Lomuto partition
0-O	Time complexity of Bubble Sort
1-O	Time complexity of Insertion Sort
2-O	Time complexity of Selection Sort
3-O	Time complexity of Quick Sort

⚙️ Function Prototypes
c
Copy code
/* sort.h */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
🌀 Sorting Algorithms
🔸 Bubble Sort
File: 0-bubble_sort.c

Prototype: void bubble_sort(int *array, size_t size);

Description: Repeatedly swaps adjacent elements if they are in the wrong order. Inefficient but easy to implement.

Complexity:

Best: O(n)

Average: O(n^2)

Worst: O(n^2)

🔸 Insertion Sort (Doubly Linked List)
File: 1-insertion_sort_list.c

Prototype: void insertion_sort_list(listint_t **list);

Description: Builds a sorted list by inserting one element at a time in the correct position. Best suited for partially sorted or small datasets.

Complexity:

Best: O(n)

Average: O(n^2)

Worst: O(n^2)

🔸 Selection Sort
File: 2-selection_sort.c

Prototype: void selection_sort(int *array, size_t size);

Description: Repeatedly finds the minimum value in the unsorted part and swaps it with the first unsorted element.

Complexity:

Best: O(n^2)

Average: O(n^2)

Worst: O(n^2)

🔸 Quick Sort (Lomuto Partition)
File: 3-quick_sort.c

Prototype: void quick_sort(int *array, size_t size);

Description: Uses a divide-and-conquer strategy. Partitions the array and recursively sorts the subarrays.

Complexity:

Best: O(n log n)

Average: O(n log n)

Worst: O(n^2)

🔍 Big O Files
Each sort has a corresponding -O file explaining its time complexities (1 per line):

File	Contents
0-O	Best: O(n), Avg: O(n^2), Worst: O(n^2)
1-O	Best: O(n), Avg: O(n^2), Worst: O(n^2)
2-O	Best: O(n^2), Avg: O(n^2), Worst: O(n^2)
3-O	Best: O(nlogn), Avg: O(nlogn), Worst: O(n^2)

💻 Example Usage
c
Copy code
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
🧪 Testing
You can compile and test with:

bash
Copy code
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c print_array.c 0-main.c -o bubble
./bubble
Make sure to replace 0-bubble_sort.c and 0-main.c with the corresponding source files.

👥 Authors
This project is part of the Holberton School curriculum on sorting algorithms and algorithm analysis.

Team Members:

Thekra Alhenaki (@thekra-alh)

Rateel Bahathiq (@rateelbahathiq)

📜 License
This project is for educational purposes only as part of the Holberton School program.
