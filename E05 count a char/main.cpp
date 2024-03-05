//
//  main.cpp
//  E05
//
//  Created by 홍준우 on 2/18/24.
//

#include <iostream>

using namespace std;

int main() {
    string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    int count = 0;          // 정수형 변수 count 선언 후 초기화
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a')
            count++;
    }
    cout << "The letter 'a' was used " << count << " times." << endl;
    return 0;
}
