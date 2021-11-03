#include <iostream>
#define PIE 3.1415926535 
// define 상수이름 내용 : 상수선언 (C스타일)
using namespace std;
int main() {
    // 원의 넓이를 구하는 프로그램
    // 반지름 * 반지름 * 파이

    int r = 3;
    float  s = r * r * PIE;
    // 1. 바뀔 프로가 없는 수
    // 2. 바뀌어서는 안되는 수
    // 상수
    // #define 을 선언하면 그 변수를 상수로서 사용가능 : 3.14 부분을 -> PIE
    
    int r2 = 3;
    float s2 = r2 * r2 * PIE;

    cout << s << endl;
    return 0;
}