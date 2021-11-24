#include <iostream>
using namespace std;

int main() {
    //c++ 에서 문자열을 다르는 방법 중 하나인 string
    /*
    c스타일로 string 객체를 초기화 할 수 있디
    cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다
    cout를 사용하여 string 객제를 디스플레이에 저장할 수 있다.
    배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

    배열을 다른 배열에 통째로 대입할 수 없다
    >> string 에서는 가능하다
    */
    char char1[20];
    char char2[20] = "mad";
    string str1;
    string str2 = "panda";
    //char1 = char2; //틀리다
    str1 = str2; //맞다
    cout << str1[0] << endl;

    return 0;
}