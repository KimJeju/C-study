#include <iostream>
using namespace std;
//참조변수
//& 참조 및 주소연산자
void swapA(int&,int&);
void swapB(int*,int*);
void swapC(int,int);

int main() {
    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태" << endl;
    cout << "wallet1 =" << wallet1 << ",wallet2" << wallet2 <<endl;

    cout << "참조를 이용한 값의 교환\n";
    swapA(wallet1, wallet2);
    cout << "참조 교환이후 상태\n";
    cout << "wallet1" << wallet1 << "wallet2" << wallet2 << endl;

    cout << "참조를 이용한 값의 교환\n";
    swapB(&wallet1, &wallet2);
    cout << "참조 교환이후 상태\n";
    cout << "wallet1" << wallet1 << "wallet2" << wallet2 << endl;

    cout << "참조를 이용한 값의 교환\n";
    swapC(wallet1, wallet2);
    cout << "참조 교환이후 상태\n";
    cout << "wallet1" << wallet1 << "wallet2" << wallet2 << endl;

    
    return 0;
}

void swapA(int& a, int& b){//참조
int temp;

temp = a;
a = b;
b = temp;
};

void swapB(int* a, int* b){//포인터
int temp;

temp = *a;
*a = *b;
*b = temp;
};

void swapC(int a,int b){//값
    int temp;

    temp = a;
    b = a;
    temp = b;

};


    //참조 (reference) 란?
    //미리 정의된 변수의 실제 이름대신 사용할 수 있는 대용 이름
    //함수의 매개변수 사용
    
