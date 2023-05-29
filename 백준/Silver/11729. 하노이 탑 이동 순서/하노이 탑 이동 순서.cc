#include <iostream>
#include <string>
using namespace std;

void hanoi(int a,int b,int c){
    if(c==1){
        cout<<a<<" "<<b<<"\n";
    }
    else{
        hanoi(a,6-a-b,c-1);
        cout<<a<<" "<<b<<'\n';
        hanoi(6-a-b,b,c-1);
    }
}
int main()
{
    int k;
    cin>>k;
    cout<<(1<<k)-1<<"\n";//2의 k승 -1
    hanoi(1,3,k);
}