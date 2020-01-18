//
//  RunLengthEncoding.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 11/30/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"
void printRLE(string str)
{
    int n = (int)str.length();
    for (int i = 0; i < n; i++) {
  
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
  
        // Print character and its count
        cout << str[i] << count;
    }
}
  
/*
int main()
{
    string str = "wwwwaaadexxxxxxywww";
    printRLE(str);
    return 0;
}
*/
