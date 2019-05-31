# 0x1A. C - Sorting algorithms & Big O

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Exercises

[0-bubble_sort.c](./0-bubble_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
```
* Prototype: void bubble_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements (See example below)

[1-insertion_sort_list.c](./1-insertion_sort_list.c)
```
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
```
* Prototype: void insertion_sort_list(listint_t **list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements (See example below)

[2-selection_sort.c](./2-selection_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
```
* Prototype: void selection_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements (See example below)

[3-quick_sort.c](./3-quick_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
```
* Prototype: void quick_sort(int *array, size_t size);
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements (See example below)

[100-shell_sort.c](./100-shell_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence
```
* Prototype: void shell_sort(int *array, size_t size);
* You must use the following sequence of intervals (a.k.a the Knuth sequence):
  * n+1 = n * 3 + 1
  * 1, 4, 13, 40, 121, ...
* You’re expected to print the array each time you decrease the interval (See example below).

[101-cocktail_sort_list.c](./101-cocktail_sort_list.c)
```
Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
```
* Prototype: void cocktail_sort_list(listint_t **list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements (See example below)

[102-counting_sort.c](./102-counting_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Counting sort algorithm
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
```
* Prototype: void counting_sort(int *array, size_t size);
* You can assume that array will contain only numbers >= 0
* You are allowed to use malloc and free for this task
* You’re expected to print your counting array once it is set up (See example below)
  * This array is of size k + 1 where k is the largest number in array

[103-merge_sort.c](./103-merge_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Merge sort algorithm
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:
```
* Prototype: void merge_sort(int *array, size_t size);
* You must implement the top-down merge sort algorithm
  * When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
  * Sort the left array before the right array
* You are allowed to use printf
* You are allowed to use malloc and free only once (only one call)
* Output: see example

[104-heap_sort.c](./104-heap_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Heap sort algorithm
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
```
* Prototype: void heap_sort(int *array, size_t size);
* You must implement the sift-down heap sort algorithm
* You’re expected to print the array after each time you swap two elements (See example below)

[105-radix_sort.c](./105-radix_sort.c)
```
Write a function that sorts an array of integers in ascending order using the Radix sort algorithm
Write in the file 105-O, the big O notations of the time complexity of the LSD Radix sort algorithm, with 1 notation per line:
```
* Prototype: void radix_sort(int *array, size_t size);
* You must implement the LSD radix sort algorithm
* You can assume that array will contain only numbers >= 0
* You are allowed to use malloc and free for this task
* You’re expected to print the array each time you increase your significant digit (See example below)

[107-quick_sort_hoare.c](./107-quick_sort_hoare.c)
```
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
```
* Prototype: void quick_sort_hoare(int *array, size_t size);
* You must implement the Hoare partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements (See example below)

## Author
### Wolf Hopkins
