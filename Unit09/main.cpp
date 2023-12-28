//
//  순환문(for) 배우기
//  Unit9
//
//  Created by 홍준우 on 12/25/23.
//

#include <iostream>

using namespace std;

int main() {
    int sum1 = 0;
    int sum2 = 0;
    
    int one = 1;
    int two = 2;
    
    //  v v v v
    // 0 1 2 3 4
    for (int i=0; i<5; i++) {
        sum1 += one;
        sum2 += two;
    }
    
    cout << "합산 결과 : " << sum1 << ", " << sum2 << endl;
    
    return 0;
}
