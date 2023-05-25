// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3]={1,2,3};
    while(1){
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]==0&&arr[1]==0&&arr[2]==0)
            return 0;
        sort(arr,arr+3);
        if(arr[0]==arr[1]&&arr[1]==arr[2])
            cout<<"Equilateral"<<endl;
        else if(arr[2]>=arr[0]+arr[1])
            cout<<"Invalid"<<endl;
        else if(arr[0]==arr[1]||arr[1]==arr[2])
            cout<<"Isosceles"<<endl;
        else if(arr[0]!=arr[1]&&arr[1]!=arr[2])
            cout<<"Scalene"<<endl;
        else
            cout<<"Invalid"<<endl;
    }
    
}