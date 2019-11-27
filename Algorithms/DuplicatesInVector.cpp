//
//  DuplicatesInVector.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 11/27/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"
/*
 Time Complexity: O(n)
 Auxiliary Space: O(1)
 */
void findDuplicatesInVectorHashing(vector<int> arr)
{
    map<int, int> hashMap;
    for (int i = 0; i<arr.size(); i++) {
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


