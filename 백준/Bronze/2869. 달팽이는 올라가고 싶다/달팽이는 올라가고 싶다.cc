#include <algorithm>
#include <iostream>

using namespace std;
int main(){
    int A,B,V;
    cin>>A>>B>>V;
    int day=0;
    if(V==A){
        cout<<1;
        return 0;
    }
    day++;V=V-A;
    int K=V/(A-B);
    int L=V%(A-B);
    if(L==0){
        day+=K;
    }
    else{
        day+=(K+1);
    }
    cout<<day;
    
}