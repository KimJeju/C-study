#include <iostream>
using namespace std;

int main() {
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합
    //복습 ) 배열 : 같은 데이터형의 집합

    //축구선수
    /*string name;
     string position;
    float height;
    float weight;
    */
    struct cppstep3 // 자동으로 만들어줌 구조체 변수 사용법
    {
        //멤버라는 구성요소
    string name;
    string position;
    int height;
    int weight;    /* data */
    } b;
    
    cppstep3 a = {
        "kunhwi",
        "middle",
        176.0,
        75,  
    };

    cout << a.name << endl;
    cout << a.position << endl;
    cout << a.height << endl;
    cout << a.weight << endl;
   
   b = {

   };
   cout << b.height < endl;
    return 0;
} 