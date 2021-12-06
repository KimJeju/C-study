#include <iostream>
using namespace std;
//템플릿
template <class Any>
Any sum(Any,Any);
template <class Any>
Any sum(int,Any);

int main() {
    int a = 4;
    int b = 3;
   // cout << sum(a, b) << endl; 1,2 썸에 매칭되어서 쓰지 못함

    float c = 3.14;
    float d = 1.5323;
    cout << sum(c,b) << endl;

    cout << sum(a,c) << endl;

    return 0;

}

template <class Any>
Any sum(Any a, Any b) {
    return a + b;
}

template <class Any>
Any sum(int a, Any b) {
    return  a + b;
}