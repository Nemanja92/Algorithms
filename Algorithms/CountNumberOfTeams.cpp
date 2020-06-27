//
//  CountNumberOfTeams.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 6/6/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

//    int numTeams(vector<int>& rating) {
//        int i,n=rating.size(),sum=0;
//        for(i=1;i<n-1;i++){
//            int countgr=0,countlr=0,countgl=0,countll=0;
//            for(int j=i-1;j>=0;j--){
//                if(rating[i]>rating[j]){
//                    countgl++;
//                }else{
//                    if(rating[i]<rating[j]){
//                        countll++;
//                    }
//                }
//            }
//            
//            for(int j=i+1;j<n;j++){
//                if(rating[i]<rating[j]){
//                    countlr++;
//                }else{
//                    if(rating[i]>rating[j]){
//                        countgr++;
//                    }
//                }
//            }
//            
//            sum+=(countll*countgr)+(countgl*countlr);
//            
//        }
//        return sum;
//};

//vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
//    vector<int> v;
//    for(int i=0;i<nums.size();i++){
//        v.insert(v.begin()+index[i],nums[i]);
//    }
//    return v;
//}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> targetArray;
//    std::vector<int> targetArray(nums.size());
    for(int i=0;i<nums.size();i++){
        int currentIndex = index[i];
        int currentNumber = nums[i];
        
//            targetArray.insert(currentIndex++, targetArray[currentIndex]);
            targetArray.insert(targetArray.begin() + currentIndex, currentNumber);
        
        targetArray[currentIndex] = currentNumber;
    }
    
    
    return targetArray;
};

//vector<int> shuffle(vector<int>& nums, int n) {
//    int insertIndex = 1;
//
//    for (int i = n; i<nums.size();) {
//        nums.insert(nums.begin() + insertIndex, nums[i]);
//        i++;
//        nums.erase(nums.begin() + i);
//        insertIndex += 2;
//    }
//
//    return nums;
//};

vector<int> shuffle(vector<int>& nums, int n) {
    int index = n;
  
    for (int i = 1; i<index;i+=2) {
        nums.insert(nums.begin() + i, nums[index]);
        index ++;
        nums.erase(nums.begin() + index);
        
    }
    
    return nums;
};
