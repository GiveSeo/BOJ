#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int sum=1;
    while(n>sum){
        sum+=6*count;
        count++;
    }
    cout<<count<<endl;
}