#include <iostream>
#include <cstring> // strlen() 함수를 쓰기위해
using namespace std;

int main() {
   const int Size = 15;
   char name1[Size];
   char name2[Size] = "C++programing";

   cout << "안녕하세요 저는" << name2;
   cout << "입니다. 성함이 어떻게 되시나요?\n";
   //cin /* <- 사용자의 입력값 출력*/ >> name1;
   cin.getline(name1, Size); // 화이트 스페이스 포함가능 겟라인 + 사용자 변수와 받을 크기  get도 동일
   cout << "응" << name1 << "씨, 당신의 이름은";
   cout << strlen/*문자열의 길이반환*/(name1) << "자 입니다만\n";
   cout << sizeof/*변수의 크기를 반환하는 연산자*/(name1) << "바이트 크기에 배열에 저장되었습니다.\n" ;
   name2[3] = '\0';
   cout << "제 이름의 처음 세문자는 다음과 같습니다.";
   cout << name2 << endl;

   return 0;
   
}