#include <iostream>
#define SIZE 20
using namespace std;

int main() {
      
    char animal[SIZE];
    char* ps;

    cout << "동물이름을 입력 하십시오\n";
    cin >> animal;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    // strlen = 소괄호로 둘러싸인 변수의 크기 반환
    // strcpy = 애니멀 변수에 값을 ps에 복사 => ps를 new 연사자를 이용해 그보다 한칸더 넉넉한 공간 지정 => strcpy를 통해 그값 복사 
    cout << "입력하신 동물 이름을 복사하였습니다" << endl;
    cout << "입력하신 동물 이름은" << animal << "이고, 주소는" << (int*)animal << "입니다." << endl;
    cout << "복사된 동물 이름은" << animal << "이고, 그 주소는" << (int*)animal << "입니다" << endl;

   
    return 0;
}