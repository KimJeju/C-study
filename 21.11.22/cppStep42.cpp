#include <iostream>
using namespace std;

int main() {
   for (int i = 0; i < 5; i++) //<- 관계표현식 
   {
      cout << i << "번째입니다" << endl; /* code */
   }

   //증가 연산자, 감소연산자
   int a = 10;
   int b = 10;

   cout << "a는" << a << "b는" << b << endl;
   cout << "a++는" << a++ << endl;
   cout << "++b는" << ++b << endl;
   cout << "a는" << a << ", b는" << b << endl;
 return 0;
}