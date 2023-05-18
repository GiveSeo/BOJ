// Example program
#include <iostream>
#include <string>
using namespace std;

int arr[101];
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(arr[temp]==0){
            arr[temp]=1;
        }
        else{
            count++;
        }
    }
    cout<<count;
}