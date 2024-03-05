//
//  main.cpp
//  E02
//
//  Created by 홍준우 on 2/18/24.
//

#include <iostream>
#include <string>

using namespace std;

namespace var {
void Char() {
    // The limit of the char type is from -127 to +127.
    char s = 'S';
    char u = 85;
    
    for(int i=0; i<2; i++)
        printf("%c", s);
    printf("%c\n", u);
}

void String() {
    string univ = "서성한";
    string is = "은";
    string famous = "명문대 입니다.";
}

void Double() {
    // double은 소수점 15자리까지, float는 소수점 7자리까지
    double pi_double = 3.14159;
    float pi_float = 3.14159f;      // TODO: f를 안붙여 줄 경우 double로 간주
    cout << pi_double + 1 << endl;
    cout << pi_float + 1 << endl;
}

void Bool() {
    bool is_true = true;    // true == 1
    bool is_false = false;  // false == 0
    if (is_true == true && is_false == true)
        cout << "Both of the arguments are true." << endl;
    else if (is_true == true || is_false == true) {
        cout << "One of the arguments is true but the other is not." << endl;
        if (!is_true)       // !is_true is equivalent of is_true == false
            cout << "The true one is is_false." << endl;
        else
            cout << "The true one is is_true." << endl;
    } else
        cout << "None of the arguments is true." << endl;
}

}

namespace opr {
void TernraryOperator() {
    int x = 1, y = 2;
    int result;
    result = x > y ? x : y;
    cout << "x 와 y 중 더 큰 값은 " << result << endl;
    // Output: 2
}

void CastingOperator() {
    int x = 2;
    double y = 4.4;
    // C++식 casting
    int i = static_cast<int> (y / x);   // double to int
    // C언어식 casting
    // TODO: 자료형에 상관없이 우선 박고보는 전통적인 casting
    int j = (int) y / x;                // double to int
    double k = y / x;
    
    cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
    cout << "4.4 / 2 = (int) " << j << endl;
    cout << "4.4 / 2 = " << k << endl;
}

void ExplicitTypeConversionOperator() {
    int x = 65;
    double y = 23.4;
    int i = int (y);                    // double to int
    double j = double (x / y);          // double to double
    char ch = char (x);                 // int to char
    
    cout << "x: " << x << endl;         // Output: 65
    cout << "y: " << y << endl;         // Output: 23.4
    cout << "i: " << i << endl;         // Output: 23
    cout << "j: " << j << endl;         // Output: (x / y)
    cout << "ch: " << ch << endl;       // Output: A
}

}

int main() {
    var::Char();
    cout << endl;
    var::Double();
    cout << endl;
    var::Bool();
    cout << endl;
    opr::TernraryOperator();
    cout << endl;
    opr::CastingOperator();
    cout << endl;
    opr::ExplicitTypeConversionOperator();
    cout << endl;
    return 0;
}
