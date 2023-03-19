#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int r_a=0;
    int r_b=0;
    for(int i=0;i<3;i++){
        r_a+=a%10;
        r_b+=b%10;
        a/=10;
        b/=10;
        r_a=r_a*10;
        r_b=r_b*10;
    }
    r_a/=10;
    r_b/=10;
    if(r_a>r_b){
        cout<<r_a;
    }
    else{
        cout<<r_b;
    }
}
