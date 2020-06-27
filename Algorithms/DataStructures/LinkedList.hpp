//
//  LinkedList.hpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 6/27/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

class LinkedList {
private:
    
    typedef struct node {
        int data;
        node* next;
    }* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    LinkedList();
    void addNode(int addData);
    void deleteNode(int delData);
    void searchNode(int key);
    void printList();
};


#endif /* LinkedList_hpp */
