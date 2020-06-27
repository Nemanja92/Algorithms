//
//  main.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 10/22/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

//int main(int argc, const char * argv[]) {
////    printf("%d \n", fib(7));
////    printf("%f \n", pow(2,-9));
////    vector<int> vect{3,6,8,8,10,12,15,15,15,20,5,8,12};
////    findDuplicatesInVectorHashing(vect);
//    vector<int> vect{1,2,4,4,7,6,-10,18};
//    hasPairWithSum(vect, 8);
//    return 0;
//}


//int main()
//{
////    char s[] = "i like this program very much";
////    reverseWords(s);
////    printf("%s", s);
////    getchar();
//    vector<int> vect{ 10, 20, 30 };
//    vector<int> test = smallerNumbersThanCurrent(vect);
//    print_vector(test);
//    //    printf("%s", s);
//    return 0;
//}

//int main()
//{
//    int arr[] = {10, 7, 8, 9, 1, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    quickSort(arr, 0, n - 1);
//    cout << "Sorted array: \n";
//    printArray(arr, n);
//    return 0;
//}


//int main()
//{
//    // Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
//    vector<int> nums{0,1,2,3,4};
//    vector<int> index{0,1,2,2,1};
////    int test = numTeams(vect);
//
//    vector<int> test = createTargetArray(nums, index);
//    print_vector(test);
//    return 0;
//}

int main()
{
    vector<int> nums{2,5,1,3,4,7};

 //   Input: nums = [2,5,1,3,4,7], n = 3
 //   Output: [2,3,5,4,1,7]
    
    vector<int> test = shuffle(nums, 3);
    print_vector(test);
    return 0;
}
