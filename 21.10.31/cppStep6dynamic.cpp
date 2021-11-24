#include <iostream>
using namespace std;

struct cppStep6dynamic //맴버
{
  char name[20];
  int age;  /* data */
};
 //동적 구조체 
    //temp* ps = new temp;
    /*
    멤버 연산자 접근법
    temp->name 화살표
    (*temp).name 소괄호 + * + 변수
    */
int main() { 
   cppStep6dynamic* temp = new cppStep6dynamic;
                           //new를 선언 동적 구조체로 전환
   cout << "당신의 이름을 입력하십시오\n";
   cin >> temp->name;

   cout << "당신의 나이를 입력하십시오\n";
   cin >> (*temp).age;

   cout << "안녕하세요!" << temp->name << "씨\n";
   cout << "당신은" << temp->age << "살 이군요";

    return 0;
}