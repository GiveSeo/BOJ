#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp_num;
        cin>>temp_num;
        arr.push_back(temp_num);
    }
    sort(arr.begin(),arr.end());
    int M;
    cin>>M;
    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        if(binary_search(arr.begin(), arr.end(), temp)){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }
    }
}