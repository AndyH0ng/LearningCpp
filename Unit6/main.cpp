//
//  사칙연산 축약하기
//  Unit6
//
//  Created by 홍준우 on 12/25/23.
//

#include <iostream>

using namespace std;

int main() {
    int two = 2;
    int eight = 8;
    int sum1 = 2;
    int sum2 = 2;
    
    sum1 = sum1 + two;
    
    // sum2에 정수형 eight를 더함
    sum2 += eight;
    
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    
    sum1 = 2;
    sum2 = 8;
    
    // sum1에 정수형 two를 곱함
    sum1 *= two;
    
    // sum2에 정수형 sum2를 나눔
    sum2 /= eight;
    
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
}
