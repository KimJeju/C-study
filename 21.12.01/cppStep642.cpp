#include <iostream>
using namespace std;
//재궈함수와 함수를 지시하는 포인터
int func(int);

int main() {
    // 함수를 지시하는 포인터
    // 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용가능
    /*
    1.함수의 주소를 얻는다.
    2.함수를 지시하는 포인터를 선언
    3.함수 지시하는 포인토 사용 -> 그 함수 호출
    */
    int(*pf)(int);
    pf = func;

    cout << (*pf)(3) << endl;
    return 0;
}

int func(int n) {
    return n + 1;
}