#include <iostream>
using namespace std;
int main() {
    // c++ 은 문자를 표현할 때 아스키코드를 사용 : 
    // 변수형 char : 작은 문자형을 표현할 때 컴퓨터는 숫자로 받아들임 : 아스키코드상에서 한단어
    // bool : 0 혹은 1 로만 저장
    int a = 77;
    // char 에서 문자를 표현하고 싶을때는 값에 ''
    // null 문자 '\0'
    // "" >> 명시적으로 null문자가 포함 => string
    char b = a ;

    bool a = 0;
    bool b = 1;
    bool c = 10;
    cout << b << endl;
    /*
    위 코드를 디버깅 하였을 시 M이 나오는 이유는 
    아스키코드에서 숫자 77이 문자 M에 대응되기 때문에 
    */
    return 0;
    
} 
