// 구조체 배열로 선언하기
#include <iostream>
using namespace std;

int main () {
   
    struct cppstep3import2
    {
    string name;
    string position;
    int height;
    int weight;    /* data */
    };

    cppstep3import2 A[2] = {
        {"a","a",1,1},
        {"b","b",2,2} 
    };

    cout << A[0].height << endl;

    return 0;
}
 