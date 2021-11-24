#include <iostream>
using namespace  std;

    
 // namespace  std;

int main() {

    //문자열 : 문자의 열
    char a[] = {'h','e','l','l','o','\0'};
    char b[] = "hello"; //""는 null 값을 갖고있기 때문에 우리가 원하는 값을 얻을 수 있다.
    cout << b << a << endl;
    return 0;
}