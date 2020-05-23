//
//  Algorithms.hpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 10/22/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <array>
#include <unordered_set>
using namespace std;

int fib(int n);
int pow();
int binarySearch(int arr[], int l, int r, int x);
int recBinarySearch(int arr[], int l, int r, int x);
void findDuplicatesInSortArray(int arr[], int n);
void findDuplicatesInVectorHashing(vector<int> arr);
void hasPairWithSum(const vector<int> data, int sum);
void printRLE(string str);
string numberToWords(int n);
void reverseWords(char* s);
