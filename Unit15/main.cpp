//
//  스코핑룰 이해하기
//  Unit15
//
//  Created by 홍준우 on 12/27/23.
//

#include <iostream>

using namespace std;

int x = 10;

int Func1() {
    int y = x + 10;
    return y;
}

int Func2() {
    int x = 100;
    return x;
}

int main() {
    cout << "y = " << Func1() << endl;
    cout << "x = " << Func2() << endl;
    
    return 0;
}
