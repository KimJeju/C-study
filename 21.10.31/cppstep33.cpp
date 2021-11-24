#include <iostream>
using namespace std;
 // 열거체(enum)
 // 기호 상수를 만드는 것에 대한 또다른 방법.
int main() {
    enum spectrum {red = 0,orange = 2,yellow = 4,green,blue, violet, indigo, ultarviolet};
    /*
    1.스펙트럼을 새로운 데이터형 이름으로 만듭니다.
    2.레드, 오랜지 ,옐로우 등등 0에서 7까지 정수값을 각각
    나타내는 기호 상수로 만든다.
    # 열거자들은 값을 대입해주지 않으면 0부터 시작하지만 =으로 값을 명시해 줄 수 있음 
    # 열거자에 값을 대입하려면 반드시 정수여야하고 값을 정의하지않은 열거문은 열거한 값에서 1씩 + 되어서 정의된다
    */
   // 열거자들 끼리에 산술연산 적용불가
   // 열거체들을 새로 선언할 때는 미리 선언한 열거자들만 사용가능 열거자 산술연산 X
   // 인트형 변수에 그 값을 대입할 려 할 떄는 열거자들이 인트형 으로 계산됨
    spectrum a = orange; 
   /*cout << a << endl;*/

    int b;
    b = blue;
    b = blue + 3;
    cout << b << endl;
    return 0;

}