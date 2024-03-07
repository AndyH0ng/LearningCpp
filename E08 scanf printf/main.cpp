//
//  main.cpp
//  E08
//
//  Created by 홍준우 on 3/7/24.
//

#include <iostream>
#include <stdio.h>
// scanf() printf() 사용 시 <stdio.h>를 include 해야 한다.

using namespace std;

int main() {
    int n;
    float m;
    scanf("%d", &n);
    scanf("%f", &m);
    // scnaf(): cin과 비슷한 역할을 하나,
    //          어떤 형식으로 변환할 지 지정할 수 있다.
    //          예시) %d = int, %f = float...
    //          뒤의 매개변수에 주소 연산자 &를 붙인 후
    //          저장할 변수를 지정하면 된다.
    
    printf("%d를 2로 나누면 %d\n", n, n / 2);
    printf("%f", m);
    // printf(): cout와 비슷한 역할을 하나,
    //           scnaf처럼 변환할 수 있다.
    //           예시) %d = int, %f = float...
    //           뒤의 매개변수에 출력할 변수를 지정하면 된다.
    
    return 0;
}
