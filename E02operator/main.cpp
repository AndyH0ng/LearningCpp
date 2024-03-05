//
//  main.cpp
//  Unit06
//
//  Created by 홍준우 on 2/17/24.
//

#include <iostream>

using namespace std;

int sum1 = 2;
int sum2 = 2;

void additiveOperator(const int i, const int j) {
    sum1 = sum1 + i;
    sum2 = sum2 * j;
}

void assignmentOperator(const int i, const int j) {
    sum1 += i;
    sum2 *= j;
}

int main() {
    additiveOperator(2, 8);
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    assignmentOperator(2, 8);
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    return 0;
}
