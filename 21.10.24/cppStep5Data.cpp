#include <iostream>
using namespace std;

int main() {
    //데이터형 변환
    /*
    1.특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 떄.
    3. 함수에 매개변수를 전달할 때
    */
    int a = 3.141592;
    cout << a << endl;

    char ch = 'M';
    cout << static_cast<int>(ch) << "" << int(ch) << endl;
    
    // 강제 데이터형 변환
    // typeName(a)
    // 바꿀 데이터형 이름 선언 + 소괄호 변수선언 or 바꿀 데이터형 괄호 선언 + 밖에 변수선언

    // c++ 조금더 제한적 데이터형 변환 연산자
    // static_cast(typeName)
    return 0;
}