# DSA Searching Techniques

## Problem Statement

This project is about finding a particular name from a list using two searching methods:

* Sequential Search
* Binary Search

The project is made using C++.

## Objectives

* Learn searching methods.
* Understand Sequential Search.
* Understand Binary Search.
* Learn the difference between both methods.
* Improve C++ programming skills.

## Technologies Used

* C++
* Data Structures and Algorithms
* Visual Studio Code

## Algorithms Used

### 1. Sequential Search

Sequential Search checks the names one by one from the beginning until the required name is found.

**Time Complexity:**

* Best Case: O(1)
* Worst Case: O(n)

### 2. Binary Search

Binary Search is used on a **sorted list**. It checks the middle element and then searches in the required half.

**Time Complexity:**

* Best Case: O(1)
* Worst Case: O(log n)

## Comparison

| Algorithm         | Best Case | Worst Case | Requirement          |
| ----------------- | --------- | ---------- | -------------------- |
| Sequential Search | O(1)      | O(n)       | Sorting not required |
| Binary Search     | O(1)      | O(log n)   | List must be sorted  |

## Sample Output

### Sequential Search

```text
Enter 5 names:
Amit
Kiran
Omkar
Rahul
Sagar

Enter name to search: Omkar
Omkar found at position 3
```

### Binary Search

```text
Enter 5 names:
Amit
Kiran
Omkar
Rahul
Sagar

Enter name to search: Omkar
Omkar found at position 3
```

## Conclusion

This project shows how Sequential Search and Binary Search work in C++. It also helps us understand the difference in their searching speed and time complexity.

## Author

**Omkar Chindhe**

B.Tech - Electronics and Telecommunication Engineering
