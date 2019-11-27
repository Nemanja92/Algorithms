//
//  PairWithSum.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 11/27/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

void hasPairWithSum(const vector<int> data, int sum) {
    unordered_set<int> comp; //compliments
    for (int value: data) {
        if (comp.find(value) != comp.end())
            printf("%d + %d = %d\n",sum-value,value,sum);
        comp.insert(sum-value);
    }
}
