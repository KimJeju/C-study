#include <iostream>
using namespace std;
//인라인 함수와 디폴트 매개변수
//인라인
inline float square(float x) {return x * x;}

int main() {
    //인라인 함수 : 프로그램 실행속도를 높이기위해 고안된 함수
    /*
    일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
    인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
    컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
    */
    int a = 5;
    cout << "한 변의 길이가" << a << "인 정사각형의 넓이는?" << endl;
    float b = square(a);
    cout << b << endl;

    return 0;
}