//
//  DefangIPaddr.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 5/22/20.
//  Copyright © 2020 Nemanja Ignjatovic. All rights reserved.
//

#include "Algorithms.hpp"

string defangIPaddr(string address) {
    string out;
    for (char c:address) {
        if(c=='.') {
            out+="[.]";
            continue;
        }
        out+=c;
    }
    return out;
}
