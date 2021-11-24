#include <iostream>
using namespace std;
// 주소 : 메모리를 대입한 공간
int main() {
    /*
    - 변수 선언과정 -
   int val = 3;
  주소연산자 cout << &val << endl;
  c++ = 객체지향 프로그래밍
  
  컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
  - 배열 생성
  재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정
  객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정
  */
  

  // 포인터 : 사용할 주소에 이름을 붙인다
  //즉 ,포인터는 포인터의 이름이 주소를 나타낸다
  // 간접값 연산자 , 간접 참조 연산자 *
/*
  int *a; // c style 
  int* b;  // c++ style
  int* c, d;  // 앞에 c는 포인터 변수, d는 int형 변수
*/

int a = 6;
int* b;
// 포인터는 위치를 나타내는 것
b = &a;

cout << "a의 값" << a << endl;
cout << "*b의 값" << *b << endl;
// b의 값을 알고싶다면 *
cout << "a의 주소" << &a <<  endl;
cout << "b의 주소" << b << endl;
// b의 주소를 알고 싶다면 아무 것도 붙이지 않는다
*b = *b + 1;

cout << "이제 a의 값은" << a << endl;


    return 0;
} 