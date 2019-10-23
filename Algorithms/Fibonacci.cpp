//
//  Algorithms.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 10/22/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

/*
 
 Time complexity: O(N).
 Each number including N, is visited, computed and then stored for O(1) access later on.
 
 Space complexity : O(N).
 The size of the stack in memory is proportionate to N.
 
 */

int fib(int n)
{
    static std::map<int, int> cache;
    
    if(n<=1) {
        cache[n]=n;
        return n;
    } else {
        
        if (!cache[n-2])
            cache[n-2]=fib(n-2);
        if (!cache[n-1])
            cache[n-1]=fib(n-1);
        
        return cache[n-2]+cache[n-1];
    }
}
