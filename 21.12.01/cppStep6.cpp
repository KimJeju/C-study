#include <iostream>
using namespace std;

void Hellcpp(int, int);
int main() {
    //파라미터 
    //알그먼트 : 실제로 함수에 전달되는 값 
    int time, time2;
    cout << "정수를 입력하세요\n";
    cin >> time;
    cout << " 정수를 한번 더 입력하세요\n";
    cin >> time2;
    Hellcpp(time, time2);
     
    return 0;
}

void Hellcpp(int n, int m) {
    for (int i = 0; i  < n; i++)
    cout << " hello, c++!\n";

    for (int i = 0; i < m; i++)
    cout << "c++!\n";
}