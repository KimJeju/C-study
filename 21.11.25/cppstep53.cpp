#include <iostream>
using namespace std;

int main() {
    
    //switch 예제
     int a;
     cin >> a;
     switch (a)
     {
     case 1/* constant-expression */:
         cout << "입력값은 1\n";/* code */
         break;
     case 2/* constant-expression */:
         cout << "입력값은 2\n";/* code */
         break;
    case 3/* constant-expression */:
         cout << "입력값은 3\n";/* code */
         break; 
 // break 구문은 프로그램이 언어를 루프하게 만들어 줌
    default :
     cout << "김모뗴 없어";
     break;
    
     }
    
     cout << "switch 끗 앙 기모뗴";
    return 0;
}