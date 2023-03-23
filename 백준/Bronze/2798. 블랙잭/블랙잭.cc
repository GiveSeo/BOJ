// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int hap=0;
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if((arr[i]+arr[j]+arr[k])<=M&&(arr[i]+arr[j]+arr[k])>hap){
                    hap=arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    cout<<hap<<endl;
}