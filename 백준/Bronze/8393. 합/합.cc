#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int hap=0;
    int num=0;
    cin>>num;
    for(int i=1;i<=num;i++)
        hap+=i;
    cout<<hap;
}
