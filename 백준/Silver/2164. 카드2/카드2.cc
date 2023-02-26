#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<int> arr;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
        arr.push_back(i);
    
    while(arr.size()>1){
        arr.pop_front();
        arr.push_back(arr.front());
        arr.pop_front();
    }
    
    cout<<arr.front();
}
