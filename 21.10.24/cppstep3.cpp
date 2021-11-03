#include <iostream>
#include <climits>
// climits 는 정수형 범위의 상수 정의를 해주는 해더다
using namespace std;

int main() {
    // 정부수 : 소수부의 없는 수
    // 음의 정수, 0 , 양의 정수
    // short,< int , < long , < long long : 정수형 데이터형
    // 위 네개의 정수는 표현할 수 있는 데이터의 크기가 다르다
    // 실수형 : 소수부가 있는 수
    /* float 이라는 변수를 설정하면 소수점 까지 저장가능하다*/
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    /*
    정수별 바이트 
    short : 2
    int : 4
    long : 4
    long long : 8 
    */


    cout << "int는"  << sizeof n_int << " 바이트이다 " << endl;
    cout << "이 바이트의 최대값은" << n_int << "이다." << endl;

    cout << "short는" << sizeof n_short << "바이트이다" << endl;
    cout << "이 바이트의 최대값은" <<  n_short << "이다." << endl;

    cout << "이 long은" << sizeof n_long << "바이트이다" << endl;
    cout << "이 바이트의 최대값은" << n_long << "이다" << endl;

    cout << "이 long long은" << sizeof n_llong << "바이트이다" << endl;
    cout << "이 long long의 최다값은" << n_llong << "이다" << endl;
    
    unsigned int a;
    // unsigned 를 변수 앞에 설정하면 음의 배수를 포함하지 않는다 그로 양의 배수가 가져갈 수 있는 수를 늘릴 수 있다
    
    return 0;
}