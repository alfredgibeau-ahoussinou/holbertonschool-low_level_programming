# 0x1E. C - Search Algorithms
* This repository contains implementations of various search algorithms in the C programming language. These algorithms are essential tools in computer science and are used to efficiently find specific elements in datasets. The project covers both basic and advanced search algorithms.


# Getting Started
* Follow the instructions below to get a copy of the project up and running on your local machine.

# Prerequisites
* Before you begin, ensure you have met the following requirements:

# Now, you can compile the C files using GCC:
+ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o search_algorithms

# Project Structure
* The project is organized as follows:

+ 0-linear.c: Linear search implementation.
+ 1-binary.c: Binary search implementation.
+ 2-O: Time complexity analysis for linear search.
+ 3-O: Space complexity analysis for iterative linear search.
+ 4-O: Time complexity analysis for binary search.
+ 5-O: Space complexity analysis for binary search.
+ 6-O: Space complexity analysis for the allocate_map function.

# Usage
* This section explains how to use the different search algorithms implemented in this project.

# Linear Search
* The linear_search function searches for a value in an array using the Linear search algorithm. It returns the index of the first occurrence of the value.

int linear_search(int *array, size_t size, int value);

# Example usage:

int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 3;

int index = linear_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Binary Search
* The binary_search function searches for a value in a sorted array using the Binary search algorithm. It returns the index of the value if found, or -1 if not found.

int binary_search(int *array, size_t size, int value);

# Jump Search
* The jump_search function searches for a value in a sorted array using the Jump search algorithm. It returns the index of the first occurrence of the value.

int jump_search(int *array, size_t size, int value);

# Example usage:

int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 3;

int index = jump_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Interpolation Search
* The interpolation_search function searches for a value in a sorted array using the Interpolation search algorithm. It returns the index of the value if found, or -1 if not found.

int interpolation_search(int *array, size_t size, int value);

# Example usage:

int array[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 12;

int index = interpolation_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Exponential Search
* The exponential_search function searches for a value in a sorted array using the Exponential search algorithm. It returns the index of the first occurrence of the value.

int exponential_search(int *array, size_t size, int value);

# Example usage:

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 6;

int index = exponential_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

