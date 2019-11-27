//
//  DuplicatesInSortedArray.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 11/26/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"
void findDuplicatesInSortArray(int arr[], int n)
{
    for (int i = 0; i<n-1; i++) {
        int j;
        if (arr[i]==arr[i+1]) {
            j=i+1;
            while (arr[j]==arr[i]) {
                j++;
            }
            printf("%d is appearing %d times\n",arr[i],j-i);
            i=j-1;
        }
    }
    
}

/*
 Time Complexity: O(n)
 Auxiliary Space: O(1)
 */
void findDuplicatesInSortArrayHashing(int arr[], int n)
{
    std::map<int, int> hashMap;
    for (int i = 0; i<n-1; i++) {
        hashMap[arr[i]]++;
    }
    
    for ( const auto &p : hashMap )
    {
        // print only if p.second (value) is gretaer then 1, meaning it is a duplicate
        if (p.second > 1) {
            printf("%d is appearing %d times\n",p.first,p.second);
        }
       
    }
    
}
