#include <iostream>
using namespace std;

//class 혹은 typeName
template <class Any>
Any sum(Any, Any);

int main() {
    int a = 3;
    int b = 4;
    cout << sum(a,b) << endl;

    float c = 3.14;
    float d = 1.5742;
    cout << sum(c,d) << endl;

   /*
   cout << sum(a,c) << endl;
   */
   return 0;
}

//함수 템플릿
//일반화 : 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수 정의
//

template <class Any> 
Any sum(Any a, Any b) { 
return a + b;
}