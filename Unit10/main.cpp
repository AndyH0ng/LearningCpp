//
//  배열( [크기] ) 배우기
//  Unit10
//
//  Created by 홍준우 on 12/25/23.
//

#include <iostream>

using namespace std;

int main() {
    
    // 배열 kArraySize의 크기를 나타내는 상수를 선언
    const int kArraySize = 3;
    
    int founding[kArraySize];
    founding[0] = 918;
    founding[1] = 1392;
    founding[2] = 1948;
    
    cout << "고려 건국 연도 : " << founding[0] << endl;
    cout << "조선 건국 연도 : " << founding[1] << endl;
    cout << "한국 건국 연도 : " << founding[2] << endl;
    
    return 0;
}
