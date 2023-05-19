// Example program
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int top_index=0;
    int max_num=0;
    for(int i=0;i<5;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(max_num<a+b+c+d){
            max_num=a+b+c+d;
            top_index=i+1;
        }
    }
    cout<<top_index<<" "<<max_num;
}