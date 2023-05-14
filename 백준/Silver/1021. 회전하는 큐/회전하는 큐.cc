// Example program
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    deque<int> arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    int cnt=0;
    while(m){
        int index=0;
        int find_target;
        cin>>find_target;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==find_target){
                index=i;
            }
        }
        if(arr.size()/2>=index){
            while(find_target!=arr[0]){
                arr.push_back(arr.front());
                arr.pop_front();
                cnt++;
            }
        }
        else{
            while(find_target!=arr[0]){
                arr.push_front(arr.back());
                arr.pop_back();
                cnt++;
            }
        }
        arr.pop_front();m--;
    }
    cout<<cnt;
}