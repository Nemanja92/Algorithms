//
//  BinarySearch.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 11/4/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include <stdio.h>

/*
  Time complexity: O(LogN)
 
  Space complexity: O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.
 
 */

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int recBinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return recBinarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return recBinarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}
