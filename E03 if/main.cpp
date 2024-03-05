//
//  main.cpp
//  E03
//
//  Created by 홍준우 on 2/18/24.
//

#include <iostream>

using namespace std;

int main() {
    int x = 10;
    if (x < 11) {
        cout << "x < 11 is true!" << endl;  // executed
    } else {
        cout << "x < 11 is false!" << endl; // not executed
    }
    
    bool flag = false;
    if (flag == true) {
        x=100;
    }
    
    int *p = new int(25);               // memory allocation
    if (p) {
        cout << *p << endl;             // outputs 25
    } else {
        cout << "p is null" << endl;    // executed if memory allocation fails
    }
}
