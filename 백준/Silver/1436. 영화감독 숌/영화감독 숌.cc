// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0;
    int ans;
    cin>>count;
    int i=100;
    while(count){
        int temp=i;
        while(temp>100){
            if((temp%10==6)&&((temp/10)%10==6)&&(((temp/10)/10)%10==6)){
                count--;
                ans=i;
                break;
            }
            temp/=10;
        }
        i++;
    }
    cout<<ans;
}