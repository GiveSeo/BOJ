#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define NUM 100
int main()
{
    int N;
    cin>>N;
    vector<int> arr(201,0);
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        arr[num+NUM]++;
    }
    int v;
    cin>>v;
    cout<<arr[v+NUM]<<endl;
}