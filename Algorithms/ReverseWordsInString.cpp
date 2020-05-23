//
//  ReverseWordsInString.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 1/18/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

// Function to reverse any sequence
// starting with pointer begin and
// ending with pointer end
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}


void reverseWords(char* s)
{
    char* word_begin = NULL;
    char* temp = s; /* temp is for word boundry */

    while (*temp) {
        /*This condition is to make sure that the string start with
        valid character (not space) only*/
        if ((word_begin == NULL) && (*temp != ' ')) {
            word_begin = temp;
        }
        if (word_begin && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    } /* End of while */

    reverse(s, temp - 1);
}


/*
 
 // Driver Code
 int main()
 {
     char s[] = "i like this program very much";
     reverseWords(s);
     printf("%s", s);
     getchar();
     return 0;
 }

 */
