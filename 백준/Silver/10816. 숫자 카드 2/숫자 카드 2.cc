#include <iostream>
#include <algorithm>
#include <vector>
#define A 10000000
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[20000001]={0,};
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        arr[temp+A]++;
    }
    int M;
    cin>>M;
    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        cout<<arr[temp+A]<<" ";
    }
}
