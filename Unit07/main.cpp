//
//  자료형 이해하기
//  Unit7
//
//  Created by 홍준우 on 12/25/23.
//

#include <iostream>

// String은 일반적인 자료형이 아니라 클래스
#include <string>

using namespace std;

int main() {
    char character = 'C';
    int integer = 100;
    double precision = 3.14159;
    bool is_true = true;
    string word = "Hello World";
    
    cout << "char : " << character << endl;
    cout << "int : " << integer << endl;
    cout << "double : " << precision << endl;
    cout << "bool : " << is_true << endl;
    cout << "string : " << word << endl;
    
    return 0;
}
