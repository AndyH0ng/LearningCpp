//
//  증감 연산자(++, --) 이해하기
//  Unit23
//
//  Created by 홍준우 on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int x = 1;
    cout << "x = " << x++ << endl;
    cout << "x = " << x++ << endl;
    cout << "x = " << ++x << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << --x << endl;
    
    return 0;
}
