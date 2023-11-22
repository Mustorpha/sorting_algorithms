0x1B. C - Sorting algorithms & Big O
By: Alexandre Gautier
Weight: 2

Team mates: Victor Ukpongette and  Mustorpa Jamiu

Project Date: 15 Nov to 22 Nov, 2023

# *************************************************************************

IN MY OWN WORDS

SORTING ALGORITYMS

Sorting algorithms are a set of procedures that put elements in a certain order. The order could be numerical, lexicographical, or based on some other criteria. There are various sorting algorithms, each with its own advantages and disadvantages in terms of time complexity, space complexity, and ease of implementation.

Bubble sort: 
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

Insertion sort:
The Insertion Sort algorithm is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has several advantages

Quick sort:
QuickSort works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

Shell sort:
Shell Sort, also known as Shell's method, is an in-place comparison-based sorting algorithm. It's an extension of the Insertion Sort algorithm that improves its efficiency by allowing the exchange of elements that are far apart. Shell Sort uses a sequence of decreasing gaps to partially sort the elements in the array, gradually reducing the gap until it becomes 1, at which point the algorithm becomes equivalent to a regular Insertion Sort.

Counting sorting:
Counting Sort is a non-comparison-based sorting algorithm that works well when the range of input values (keys) is known and is not significantly larger than the number of elements to be sorted. It operates by counting the number of occurrences of each element and using that information to determine the position of each element in the sorted output.

Merge sort:
Merge Sort is a classic divide-and-conquer algorithm used for sorting arrays or lists. It was invented by John von Neumann in 1945. The key idea behind Merge Sort is to divide the array into smaller sub-arrays, recursively sort each sub-array, and then merge them back together to produce a sorted result. Merge Sort guarantees a time complexity of O(n log n) for the worst, average, and best cases.

Heap sort:
Heap Sort is another comparison-based sorting algorithm that is based on the binary heap data structure. It uses the concept of a heap to build a partially ordered binary tree, and then repeatedly extracts the maximum (for a max-heap) or minimum (for a min-heap) element from the heap and rebuilds the heap until the entire array is sorted. Heap Sort has a time complexity of O(n log n) for the worst, average, and best cases.

BIG 0 NOTATION

Big O Notation:
Big O notation is a way to describe the performance or complexity of an algorithm in terms of its input size. It provides an upper bound on the growth rate of the runtime of an algorithm in the worst-case scenario.

Here are some common Big O notations:

O(1): Constant time complexity. The algorithm's runtime does not depend on the size of the input.
O(log n): Logarithmic time complexity. Common in algorithms that divide the problem in each step, like binary search.
O(n): Linear time complexity. The runtime grows linearly with the size of the input.
O(n log n): Linearithmic time complexity. Common in efficient sorting algorithms like Merge Sort and Heap Sort.
O(n^2): Quadratic time complexity. Common in algorithms with nested iterations, like Bubble Sort and Insertion Sort.

