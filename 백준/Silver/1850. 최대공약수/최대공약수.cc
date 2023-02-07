#include <iostream>

using namespace std;

int gcd(long long a, long long b){//뉴클리드 호제법
    do{
        long long r=a%b;
        a=b;
        b=r;
    }while(b);
    return a;
}
int main()
{
    long long A;
    long long B;
    cin>>A>>B;
    int one_num=gcd(A,B);
    for(int i=1;i<=one_num;i++)//최대 공약수의 수 만큼 1 출력.
        cout<<"1";

    return 0;
}