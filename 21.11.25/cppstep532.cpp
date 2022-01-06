#include <iostream>
using namespace std;

int main() {

    int i = 0;
    while (true)
    {
     cout << "i의 값은" << i << "입니당" << endl;
     if(i > 10)
     break;
     i++;   /* code */
    }
    cout << "와일끝\n";
    return 0;
}