#include <iostream>
using namespace std;
//함수와 배열
const int SIZE = 8;
int sumArr(int[],int);
int main() {
     
    int arr[SIZE] = {1,2,4,8,6,32,64,128};
    // arr = &arr[0]
    int sum = sumArr(arr, SIZE);
    cout << "함수의 총 합은" << sum << "입니다.";
    return 0;
}

int sumArr(int arr[], int n) {
    int total = 0;

    for(int i = 0; i < n; i++)
    total += arr[i];

    return total;
}