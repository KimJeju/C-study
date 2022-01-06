#include <iostream>
using namespace std;

int main() {
    //논리 표현식
    //논리합, 논리곱,논리부정 연산자

    //논리합 : ||
    /*
    좌항 || 우항
    */

   //논리곱 : &&
   // 논리부정 : !
   
   /*
   if(false) {
       cout << "#1";
   }else if(true) {
      cout << "#2";
   }else {
        cout << "#1";
   }
    cout << "프로그램이 종료되었습니다.";
    */
      
   cout << "당신의 나이를 입력하십시오.";
   int age;
   cin >> age;

   if(age < 0 || age > 100) {
       cout << "거짓말 노노\n";
   }else if(20 <= age && age <= 29) {
       cout << "당신은 20대 이군요?";
   } else {
      cout << "당신의 나이를 모르겠어요";
   }
    return 0;
}