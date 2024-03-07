//
//  main.cpp
//  E06
//
//  Created by 홍준우 on 2/20/24.
//

#include <iostream>

using namespace std;

int main() {
    int number[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17 };
    for (int i = 0; i < 10; i++) {
        if (number[i] % 2 == 0)
            cout << i << "번째 데이터 " << number[i] << "은(는) 짝수이다." << endl;
        else
            cout << i << "번째 데이터 " << number[i] << "은(는) 홀수이다." << endl;
    }
    return 0;
}
