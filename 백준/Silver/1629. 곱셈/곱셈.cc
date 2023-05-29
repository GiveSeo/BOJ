// Example program
#include <iostream>
#include <string>
using namespace std;
long long Pow(long long a,long long b,long long c){
    if(b==1)
        return a%c;
    long long ans=Pow(a,b/2,c)%c;
    ans=ans*ans%c;
    if(b%2==0)
        return ans;
    else
        return ans*a%c;
}
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<Pow(a,b,c);
}