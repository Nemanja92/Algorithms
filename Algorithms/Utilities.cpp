//
//  Utilities.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 5/25/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//
#include "Utilities.hpp"
void print_vector(std::vector<int> const &input)
{
    // specify a lambda expression
    std::for_each(input.begin(),
                input.end(),
                [](const auto &e) {
                    std::cout << e << " ";
                });

    // or pass object of a class overloading the ()operator
    // std::for_each(input.begin(), input.end(), ob);

    // or specify a function
    // std::for_each(input.begin(), input.end(), print);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
