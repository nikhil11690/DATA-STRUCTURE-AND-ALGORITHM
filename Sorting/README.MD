# Sorting Algorithms

This repository contains implementations and notes for common sorting algorithms used in Data Structures and Algorithms (DSA).

---

## What is Sorting?

Sorting is the process of arranging data in a specific order, usually:

* Ascending Order
* Descending Order

Example:

Input:

```text
5 2 8 1 3
```

Sorted Output:

```text
1 2 3 5 8
```

---

# Sorting Algorithms Covered

## 1. Selection Sort

### Idea

Find the minimum element from the unsorted part and place it at the correct position.

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n²)      |
| Average | O(n²)      |
| Worst   | O(n²)      |

### Space Complexity

```text
O(1)
```

### Stable

❌ No

### In-Place

✅ Yes

---

## 2. Bubble Sort

### Idea

Repeatedly compare adjacent elements and swap if they are in the wrong order.

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n)       |
| Average | O(n²)      |
| Worst   | O(n²)      |

### Space Complexity

```text
O(1)
```

### Stable

✅ Yes

### In-Place

✅ Yes

---

## 3. Insertion Sort

### Idea

Insert each element into its correct position in the already sorted part.

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n)       |
| Average | O(n²)      |
| Worst   | O(n²)      |

### Space Complexity

```text
O(1)
```

### Stable

✅ Yes

### In-Place

✅ Yes

---

## 4. Merge Sort

### Idea

Divide the array into two halves, sort them recursively, and merge them.

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n log n) |
| Average | O(n log n) |
| Worst   | O(n log n) |

### Space Complexity

```text
O(n)
```

### Stable

✅ Yes

### In-Place

❌ No

---

## 5. Quick Sort

### Idea

Choose a pivot and partition elements around it.

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n log n) |
| Average | O(n log n) |
| Worst   | O(n²)      |

### Space Complexity

```text
O(log n)
```

### Stable

❌ No

### In-Place

✅ Yes

---

## Complexity Comparison

| Algorithm      | Best       | Average    | Worst      | Space    |
| -------------- | ---------- | ---------- | ---------- | -------- |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      | O(1)     |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)     |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) |

---

## Which Sorting Algorithm Should I Use?

| Scenario                   | Recommended Algorithm |
| -------------------------- | --------------------- |
| Small Data                 | Insertion Sort        |
| Nearly Sorted Data         | Insertion Sort        |
| Guaranteed O(n log n)      | Merge Sort            |
| Fast Practical Performance | Quick Sort            |
| Competitive Programming    | STL sort()            |
| Learning Basics            | Selection/Bubble Sort |

---

## C++ STL Sort

```cpp
sort(arr.begin(), arr.end());
```

### Complexity

```text
O(n log n)
```

Internally C++ uses Introsort:

* Quick Sort
* Heap Sort
* Insertion Sort

---

# Learning Order

1. Selection Sort
2. Bubble Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Heap Sort

---

# Practice Problems

### Easy

* LeetCode 912 - Sort an Array
* LeetCode 88 - Merge Sorted Array
* LeetCode 242 - Valid Anagram

### Medium

* LeetCode 75 - Sort Colors
* LeetCode 56 - Merge Intervals

---

## Author

Nikhil Kumar

Learning DSA for Product-Based Companies 🚀
