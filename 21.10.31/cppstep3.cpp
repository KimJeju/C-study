#include <iostream>
using namespace std;
 //공용체(union) : 서로 다른 데이터형을 한번에 한가지만 보관할 수 있음
 // 어느 한 시점에 어느 한가지만 가능
int main() {

 union cppstep3
 {
    int intVal;
    long longval;
    float floatVal;    /* data */
 };
  cppstep3 test;
  test.intVal = 3;
  std::cout << test.intVal << endl;
  test.longval = 33;
  std::cout << test.intVal << endl;
  std::cout << test.longval << endl;
  test.floatVal = 3.3;
  std::cout << test.intVal << endl;
  std::cout << test.longval << endl;
  std::cout << test.floatVal << endl; 

    return 0;
} 