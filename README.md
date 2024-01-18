# Introduction

The project "C - Sorting algorithms & Big O" is an educational project that focuses on sorting algorithms and their time and space complexities, represented by Big O notation. Sorting algorithms are fundamental in computer science and are used to arrange data in a specific order, such as ascending or descending. The project aims to introduce popular sorting algorithms and demonstrate how to analyze their efficiency using Big O notation .

# Learning Objectives

The project covers the following learning objectives:

Introduction to popular sorting algorithms
Understanding and using Big O notation to indicate time and space complexity

# Sorting Algorithms

The project explores several common sorting algorithms, each with its own strengths and weaknesses. Some of the sorting algorithms covered in the project include:

Bubble Sort: Bubble sort is a simple algorithm that repeatedly swaps adjacent elements if they are in the wrong order. It continues this process until the list is sorted. Bubble sort has a time complexity of O(n), making it a slow algorithm for large data sets. However, it is easy to understand and implement, making it suitable for educational purposes .

Insertion Sort: Insertion sort works by dividing the input into a sorted and an unsorted region. It iterates through the unsorted region, comparing each element to the elements in the sorted region and inserting it at the correct position. Insertion sort has a time complexity of O(n^2) in the worst and average cases, but it performs well on small or nearly sorted lists.

Selection Sort: Selection sort divides the input into a sorted and an unsorted region. It repeatedly selects the smallest element from the unsorted region and swaps it with the first element of the unsorted region. Selection sort has a time complexity of O(n^2) in all cases, making it inefficient for large data sets.

Merge Sort: Merge sort is a divide-and-conquer algorithm that recursively divides the input into smaller subproblems, sorts them, and then merges them back together. It has a time complexity of O(n log n) in all cases, making it an efficient sorting algorithm. Merge sort requires additional space for merging the subproblems, resulting in a space complexity of O(n).

Quick Sort: Quick sort is another divide-and-conquer algorithm that selects a pivot element and partitions the input into two subarrays, one with elements smaller than the pivot and one with elements larger than the pivot. It then recursively sorts the subarrays. Quick sort has an average time complexity of O(n log n) and a worst-case time complexity of O(n^2). However, it is often faster in practice due to its efficient partitioning scheme .

Heap Sort: Heap sort uses a binary heap data structure to sort the input. It builds a max heap from the input and repeatedly extracts the maximum element, placing it at the end of the sorted region. Heap sort has a time complexity of O(n log n) in all cases and a space complexity of O(1) since it operates in-place.

# Big O Complexity Analysis

The project emphasizes the use of Big O notation to analyze the time and space complexities of the sorting algorithms. Big O notation provides a way to express the upper bound of an algorithm's growth rate as the input size increases. It helps in understanding and comparing the efficiency of different algorithms.

The time complexity of an algorithm represents the amount of time it takes to run as a function of the input size. It is expressed using Big O notation, such as O(n), O(n^2), O(log n), etc. The project provides a Big-O complexity chart that shows the time complexities of various sorting algorithms in their best, average, and worst cases .

The space complexity of an algorithm represents the amount of additional memory it requires as a function of the input size. It is also expressed using Big O notation, such as O(1), O(n), O(n^2), etc. The project includes information about the space complexities of the sorting algorithms.

# Conclusion

The project "C - Sorting algorithms & Big O" is an educational project that introduces popular sorting algorithms and demonstrates how to analyze their efficiency using Big O notation. It covers sorting algorithms like bubble sort, insertion sort, selection sort, merge sort, quick sort, and heap sort. The project emphasizes the importance of understanding time and space complexities and provides a Big-O complexity chart for reference.
