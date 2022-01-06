#include <iostream>
using namespace std;
//디폴트 매계변수
const int SIZE = 8;
int sumArr(int[],int n = 1);
int main() {
     //디폴트 매계번수는 오른쪽에서 왼쪽으로 정의해야한다
    int arr[SIZE] = {1,2,4,8,6,32,64,128};
    // arr = &arr[0]
    int sum = sumArr(arr);
    cout << "함수의 총 합은" << sum << "입니다.";
    return 0;
}

int sumArr(int arr[], int n) {
    int total = 0;

    for(int i = 0; i < n; i++)
    total += arr[i];

    return total;
}