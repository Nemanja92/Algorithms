//
//  LinkedList.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 6/27/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "LinkedList.hpp"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void LinkedList::addNode(int addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if (head != NULL) {
        curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = n;
    } else {
        head = n;
    }
    
}

void LinkedList::deleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while (curr != NULL && curr->data != delData) {
        temp = curr;
        curr = curr->next;
    }
    
    if (curr == NULL) {
        cout << delData << " was not in the list\n";
        delete delPtr; // to remove from memory
    } else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        
        if (delPtr == head) {
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The value " << delData << " was deleted\n";
    }
}

void LinkedList::printList() {
    curr = head;
    while (curr != NULL) {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
