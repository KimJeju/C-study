#include <iostream>

using namespace std;

int main() {
    // + - * / %
    /*
    + : 두 개의 피연산자의 합을 계산
    - : 첫 번째 피연산자에서 두 번쨰 피연산자를 계산
    * : 두개의 피연산자의 곱을 계산
    / : 첫번째 피 연산자에서 두번쨰 피연산자를 나눔
    >> 두개의 피연산자가 모두 정수이면 결가값은 "몫" 입니다.
    & : 첫번째 피연산자를 두번째 피연산자로 나누어 나머지를 구합니다
    >> 예로 19를 6으로 나누게 되면 그값은 1
    부동 소수점(실수) 사용불가.
    */
    int a = 10;
    int b = 3;

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a & b;

    cout << "c :" << c  << endl;
    cout << "d :" << d  << endl;
    cout << "e :" << e  << endl;
    cout << "f :" << f  << endl;
    cout << "g :" << g  << endl;
    
    return 0;
}