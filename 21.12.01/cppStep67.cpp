#include <iostream>
using namespace std;
//함수 오버로딩

int sum(int, int);
float sum(float,float);

int main() {
    cout << "두 정수를 입력]\n";
    int a,b;
    cin >> a >> b;
    cout << "두 정수의 합은" << sum(a,b) << "입니다\n";
    cout << "두 실수를 입력\n";
    float c,d;
    cin >> c >> d;
    cout << "두정수의 합은" << sum(c,d) << "입니다\n";

}

int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}
//함수의 다형
    //다형 : 다양한 형태를 지닌 함수
    //함수의 오버로딩 : 여러 개의 함수를 같은 이름으로 연결한다

// 오버로딩 사용불가
/*
1. 함수의 리턴형만 다를경우
2. 함수를 사용할 때 , 두 개 이상의 함수에 대응되는 경우
*/