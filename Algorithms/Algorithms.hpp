//
//  Algorithms.hpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 10/22/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Utilities.hpp"

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
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
vector<int> smallerNumbersThanCurrent(vector<int>& nums);
void quickSort(int arr[], int low, int high);
int numTeams(vector<int>& rating);
vector<int> createTargetArray(vector<int>& nums, vector<int>& index);
vector<int> shuffle(vector<int>& nums, int n);
