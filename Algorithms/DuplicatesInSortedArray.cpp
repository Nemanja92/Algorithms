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
