//
//  NumbersSmallerThanCurrent.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 5/25/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result;
    vector<int> temp = nums; // temp vector for sorting
    sort(temp.begin(), temp.end());
    for(auto i = nums.begin(); i != nums.end(); i++){
        auto j = find(temp.begin(),temp.end(), *i);
        result.push_back(j-temp.begin());
}
    return result;
}
