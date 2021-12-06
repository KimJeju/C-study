#include <iostream>
using namespace std;

class stock
{
private: //클래스의 맴버의 대한 접근 제한
    string names;
    int shares;
    float share_val;
    double total_val;
    void set_total() { total_val = shares * share_val;}

public:
    void acquire(string co, int n, float pr);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    stock(/* args */);
    ~stock();
};

    void stock :: acquire(string co, int n, float pr) {
    names = co;
    shares = n;
    share_val = pr;
    set_total();       
}
    void stock :: buy(int n, float pr) {
    shares += n;
    share_val = pr;
    set_total();
}
    void stock :: sell(int n , float pr){
    shares -= n;
    share_val = pr;
    set_total();
}
    void stock :: update(float pr){
    share_val = pr;
    set_total();

}
    void stock :: show(){
    cout << "화사명 :" << names << endl;
    cout << "주식 수 :" << shares << endl;
    cout << "주가 :" << share_val << endl;
    cout << "주식 총 가치 :" << total_val << endl;
}

// 사용 범위 결정 연산자 :: 
stock::stock(/* args */) //생성자
{
}

stock::~stock() //파괴자
{
}

int main() {
    stock temp;
    temp.acquire("kunhwi",100,1000);
    temp.show();
    temp.buy(10,1200);
    temp.show();
    temp.sell(5,800);
    temp.show();
    return 0;
}


//추상화와 클래스
//데이터형이란? : 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
// 클래스란 ? : 추상화를 사용자 정의 데이터형으로 변환 시켜주는 수단 
// 추상화란 : 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통의 특징을 간결한 방식으로 ,이해하기 쉽게 표현하는 것
/*
1.클래스 선언
2. 클래스 매서드 선언
*/