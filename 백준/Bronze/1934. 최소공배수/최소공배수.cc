#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a,int b);

int main()
{
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        cout<<(a*b)/gcd(a,b)<<"\n";//최소공배수 = (두 수 곱)/최대 공약수
    }
}

int gcd(int a,int b){
    while((a!=0)&&(b!=0)){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    return a>b?a:b;
}
