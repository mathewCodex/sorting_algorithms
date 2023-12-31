# Sorting Algorithms

## Function Prototypes:
### list of all the prototype ...

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |
| `100-shell_sort.c`         | `void shell_sort(int *array, size_t size);`       |
| `101-cocktail_sort_list.c` | `void cocktail_sort_list(listint_t **list);`      |
| `102-counting_sort.c`      | `void counting_sort(int *array, size_t size);`    |
| `103-merge_sort.c`         | `void merge_sort(int *array, size_t size);`       |
| `104-heap_sort.c`          | `void heap_sort(int *array, size_t size);`        |
| `105-radix_sort.c`         | `void radix_sort(int *array, size_t size);`       |
| `106-bitonic_sort.c`       | `void bitonic_sort(int *array, size_t size);`     |
| `107-quick_sort_hoare.c`   | `void quick_sort_hoare(int *array, size_t size);` |
| `1000-deck_node.c` | `void sort_deck(deck_node_t **deck);` |

* [deck.h](./deck.h):header file with function for  `1000-sort_deck.c`.
### data structure used 
Data Structures:
```
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;
```

## Task page with links:
* [i-O](./i-O):this are  Text files containing the best, average, and worst case time complexity of BIG O.

* The goal of all the functions are to sort datas in acsending order using different Sorting Algorithm techniques. and print the array
after each swap.


* **0. Bubble sort**
  * [0-bubble_sort.c](./0-bubble_sort.c): A function in C under the big and sorting algo that sort integers in ascending order using the buble sort algo

* **1. Insertion sort**
  * [1-insertion_sort_list.c](./1-insertion_sort_list.c): A C function that sorts a node doubly list integers using insertion sort algorithm
  * Prints the list after each swap.

* **2. Selection sort**
  * [2-selection_sort.c](./2-selection_sort.c): A C function that sorts an array of integers in ascending order using the Selection Sort algorithm.

* **3. Quick sort**
  * [3-quick_sort.c](./3-quick_sort.c): C function that sorts an array of integers in ascending order using the Quick Sort algorithm.
  * Implements the Lomuto partition scheme.
  * using always the last element of the partition as pivot.

* **4. Shell sort - Knuth Sequence**
  * [100-shell_sort.c](./100-shell_sort.c): C function that sorts an array of integers in ascending order using the Shell sort algorithm.
  * Implements the Knuth interval sequence.
  * Prints the array each time the interval is decreased.

* **5. Cocktail shaker sort**
  * [101-cocktail_sort_list.c](./101-cocktail_sort_list.c): C function that sorts
  a `listint_t` doubly-linked list of integers in ascending order using the Cocktail Shaker Sort algorithm.

* **6. Counting sort**
  * [102-counting_sort.c](./102-counting_sort.c): C function that sorts an array of integers in ascending order using the Counting Sort algorithm.
  * Assumes that the array will only contain numbers `>= 0`.
  * Prints the counting array after it has been initialized.

* **7. Merge sort**
  * [103-merge_sort.c](./103-merge_sort.c): A C function that sorts an array of integers using the Merge Sort algorithm.
  * Implements the `top-down` Merge Sort algorithm.
    * When an array is divided, the size of the left subarray is always less than or equal to the size of the right subarray.
    * Always sorts the left subarray before the right one.

* **8. Heap sort**
  * [104-heap_sort.c](./104-heap_sort.c): A C function that sorts an array of integers using the Heap Sort algorithm.
  * Implements the `sift-down` Heap Sort algorithm.

* **9. Radix sort**
  * [105-radix_sort.c](./105-radix_sort.c):A  C function that sorts an array  using the Radix Sort algorithm.
  * Implements the Least-Significant-Digit (LSD) Radix Sort algorithm.
  * Assumes that the array will only contain numbers `>= 0`.

* **10. Bitonic sort**
  * [106-bitonic_sort.c](./106-bitonic_sort.c): C function that sorts an array using the Bitonic Sort algorithm.
  * Assumes that `size` is a power of 2 (ie. `size` can be expressed as `2^k` where `k >= 0`).

* **11. Quick Sort - Hoare Partition scheme**
  * [107-quick_sort_hoare.c](./107-quick_sort_hoare.c):A  C function that sorts an array  using the Quick Sort algorithm.
  * Implements the Hoare partition scheme.
  * Always uses the last elemement of the partition being sorted as the pivot.


* **12. Dealer**
  * [1000-sort_deck.c](./1000-sort_deck.c):A  C function that sorts a `deck_node_t` doubly-linked list deck of cards.
  * Assumes that there are exactly `52` elements in the doubly-linked list.
  * Orders the deck from spades to diamonds and from aces to kings.

author 
https://github.com/mathewCodex
