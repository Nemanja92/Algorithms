//
//  NumberOfStepsReduceNumberToZero.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 5/25/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"
int numberOfSteps (int num) {
    int temp = num;
    int count = 0;
    
    while(temp != 0){
        if(temp % 2 == 0){
            temp = temp/2;
            count++;
        }
        if(temp % 2 == 1){
            temp--;
            count++;
        }
    }
    
    return count;
}
