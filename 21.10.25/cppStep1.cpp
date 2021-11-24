#include <iostream>
using namespace std;


    
 // namespace std;


int main() {
/* 
c++은 복합데이터형을 제공한다
>> 사용자 정의대로 새로운 데이터형을 만들 수 있다.
복합데이터형 : 기본 정수형과 부동소수점형의 조합

배열(array) : 같은 데이터형의 집합
typeName arrayName[arraySize];
*/
short month[12] = /* 배열의 초기화 콤마 구분 */{ 1,2,3}; 
// 맨 앞 값만 0으로 지정하면 뒤에 나머지 값들도 자동으로 0으로 초기화된다.

cout << month[0] << endl;

    return 0;
}