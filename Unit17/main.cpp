//
//  문자열형 변수(string) 이해하기
//  Unit17
//
//  Created by 홍준우 on 12/27/23.
//

#include <string>
#include <iostream>

using namespace std;

int main() {
    string my_country = "korea";
    string my_job = "developer";
    
    cout << "Country : " << my_country << endl;
    cout << "Job : " << my_job << endl;
    
    string my_info = my_country + ", " + my_job;
    
    cout << "My Info : " << my_info << endl;
    
    return 0;
}