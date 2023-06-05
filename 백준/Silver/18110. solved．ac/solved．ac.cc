#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){cout<<"0";return 0;}
    deque<int> arr;
    int exce=(int)((n*0.15)+0.5);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    };
    sort(arr.begin(),arr.end());
    for(int i=0;i<exce;i++){
        arr.pop_front();
        arr.pop_back();
    }
    double ave=0;
    for(int i=0;i<arr.size();i++){
        ave+=arr[i];
    }
    ave/=n-(exce*2);
    cout<<(int)(ave+0.5);
}