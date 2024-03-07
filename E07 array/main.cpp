//
//  main.cpp
//  E07
//
//  Created by 홍준우 on 2/27/24.
//

#include <iostream>

using namespace std;

namespace scala {
void HeapDeclarations() {
    constexpr size_t size = 10;
    // size_t는 어떤 타입의 사이즈든지 나타낼 수 있는, 충분한 byte를 가진 unsigned integer이다.
    // It is useful to use size_t to express an index of vector or array.
    
    // Declare an array of doubles to be allocated on the stack.
    double numbers[size];
    
    // Assign a new value to the first element.
    numbers[0] = 1;
    
    for (size_t i = 1; i < size; i++) {
        numbers[i] = numbers[i - 1] * 1.1;
        // The last element is the (size - 1) element.
        // It is your responsibility to ensure that your program NEVER passes a value to the subscript operator that is greater than (size - 1).
    }
    
    for (size_t i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

void InitializingArrays() {
    int a[10];
    for (int i = 0; i < 10; ++i)
        a[i] = i + 1;
    // i = 0; <- init-expression: for에서 한 번만 실행된다.
    // i < 10; <- cond-expression: 첫 반복을 포함하여 for 문 내의 statement의 각 반복을 실행하기 전에 평가되는 기준이다.
    // ++i <- loop-expression: statement의 반복 후 loop-expression이 실행된 후, cond-expression에 따라 평가된다.
    
    // 종합하면 cond -> statement -> loop -> cond...
    // 따라서 a[9] = 10까지만 저장된다.
    
    int b[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    for (size_t i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    for (size_t i = 0; i < 10; i++)
        cout << b[i] << " ";
    
}
}

namespace matrix {
void InitializingArrays() {
    
    const int cMarkets = 4;
    double TransportCosts[][cMarkets] = {
        { 32.19, 47.29, 31.99, 19.11 },
        { 11.29, 22.49, 33.47, 17.29 },
        { 41.97, 22.09,  9.76, 22.55 }
    };
    // Declare a ?-by-four matrix
    // 배열의 첫 번째 차원은 생략되었지만 compiler가 initializer를 검사하여 해당 차원을 채운다.
    // n차원 배열에서 n이 1이면 scala가 생성된다.
}
}

int main() {
    scala::HeapDeclarations();
    scala::InitializingArrays();
    matrix::InitializingArrays();
    return 0;
}
