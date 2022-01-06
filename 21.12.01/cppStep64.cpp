#include <iostream>
using namespace std;
//재궈함수와 함수를 지시하는 포인터
void CountDown(int);


int main() {
//재귀호출 : C++에서 함수가 자기 자신을 호출 할 수 있다.
// if문과 함께 사용
    CountDown(5);
    return 0;
}

void CountDown(int n) {
    cout << "Counting ..." << n << endl;
    if(n > 0)
    CountDown(n - 1);
    cout << n << "번째 재궈함수" << endl;
}
