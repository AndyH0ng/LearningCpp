//
//  관계 연산자(==, !=, <, <=, >, >=) 이해하기
//  Unit24
//
//  Created by 홍준우 on 12/28/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string publisher = "정보문화사";
    string language = "C++";
    int x = 10;
    int y = 10;
    
    if(publisher != language)
        cout << "두 문장은 같지 않습니다" << endl;
    else
        cout << "두 문장은 같습니다" << endl;
    
    if(x>=y)
        cout << "x는 y보다 크거나 같습니다" << endl;
    else
        cout << "x는 y보다 작습니다" << endl;
    
    if(x<=20)
        cout << "x는 20보다 작거나 같습니다" << endl;
    else
        cout << "x는 20보다 큽니다" << endl;
    
    return 0;
}
