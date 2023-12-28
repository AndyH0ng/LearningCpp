//
//  논리 연산자(and, or, not) 이해하기
//  Unit25
//
//  Created by 홍준우 on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    bool is_x = true;
    bool is_y = false;
    
    if(is_x==true && is_y==false)
        cout << "is_x && is_y = " << "true" << endl;
    else
        cout << "is_x && is_y = " << "false" << endl;
    
    if(x==10 || is_x==false)
        cout << "x가 10이거나 is_x가 false 입니다" << endl;
    else
        cout << "x는 10도 아니며 is_x는 true 입니다" << endl;
    
    if(!is_y)
        cout << "is_y의 원래 값은 false 입니다" << endl;
    else
        cout << "is_y의 원래 값은 true 입니다" << endl;
    
    return 0;
}
