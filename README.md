# Sorting Algorithms & Big O

## Description
This project is about understanding and implementing different sorting algorithms in C. It includes analyzing the time complexity of these algorithms using **Big O Notation** and learning how to choose the most efficient algorithm for a given situation.

---

## Learned Concepts

### What is Big O Notation?
Big O Notation describes the performance or complexity of an algorithm, focusing on how it scales with input size.

- **O(1):** Constant time, does not depend on input size.
- **O(n):** Linear time, performance grows proportionally to input size.
- **O(n^2):** Quadratic time, performance grows with the square of input size.
- **O(log n):** Logarithmic time, grows slower as input size increases.
- **O(n log n):** Combination of linear and logarithmic growth.

### Sorting Algorithms Covered
1. **Bubble Sort**
2. **Insertion Sort**
3. **Selection Sort**
4. **Quick Sort**

### Stable vs Unstable Sorting Algorithms
- **Stable:** Maintains relative order of equal elements.
- **Unstable:** Does not maintain order of equal elements.

### How to Choose a Sorting Algorithm
- **Input size:** Small inputs may favor simpler algorithms like Bubble Sort.
- **Data order:** Pre-sorted or reverse-sorted data may favor specific algorithms.
- **Stability requirement:** Choose stable algorithms when preserving order matters.

---

## Data Structures

### Array Printing Function
```c
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++) {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}
```

### Doubly Linked List
```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

### List Printing Function
```c
void print_list(const listint_t *list)
{
    while (list) {
        printf("%d", list->n);
        if (list->next)
            printf(", ");
        list = list->next;
    }
    printf("\n");
}
```

---

## Tasks

### 0. Bubble Sort
**Function:** `void bubble_sort(int *array, size_t size)`

- Sorts an array in ascending order using the Bubble Sort algorithm.
- Prints the array after each swap.

**Big O Complexity:**
- **Best case:** O(n)
- **Average case:** O(n^2)
- **Worst case:** O(n^2)

**Example:**
```c
int array[] = {19, 48, 99, 71, 13};
size_t size = sizeof(array) / sizeof(array[0]);

bubble_sort(array, size);
```
**Output:**
```
19, 48, 71, 13, 99
...
13, 19, 48, 71, 99
```

### 1. Insertion Sort
**Function:** `void insertion_sort_list(listint_t **list)`

- Sorts a doubly linked list in ascending order using Insertion Sort.
- Swaps nodes instead of values.
- Prints the list after each swap.

**Big O Complexity:**
- **Best case:** O(n)
- **Average case:** O(n^2)
- **Worst case:** O(n^2)

**Example:**
```c
listint_t *list = create_listint(array, size);
insertion_sort_list(&list);
```
**Output:**
```
13, 19, 48, 71, 99
```

### 2. Selection Sort
**Function:** `void selection_sort(int *array, size_t size)`

- Sorts an array in ascending order using Selection Sort.
- Prints the array after each swap.

**Big O Complexity:**
- **Best case:** O(n^2)
- **Average case:** O(n^2)
- **Worst case:** O(n^2)

**Example:**
```c
int array[] = {19, 48, 99, 71, 13};
selection_sort(array, size);
```
**Output:**
```
13, 19, 48, 71, 99
```

### 3. Quick Sort
**Function:** `void quick_sort(int *array, size_t size)`

- Sorts an array in ascending order using Quick Sort.
- Implements the Lomuto partition scheme.
- Prints the array after each swap.

**Big O Complexity:**
- **Best case:** O(n log n)
- **Average case:** O(n log n)
- **Worst case:** O(n^2)

**Example:**
```c
int array[] = {19, 48, 99, 71, 13};
quick_sort(array, size);
```
**Output:**
```
13, 19, 48, 71, 99
```

---



## Authors
- **Nazarena Aranda**: [nazarena-aranda](https://github.com/nazarena-aranda)
- **Fernando Falcon**: [Fernando-Falcon](https://github.com/Fernando-Falcon)
