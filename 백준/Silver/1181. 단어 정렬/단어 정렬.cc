#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    else{
        return a.length()<b.length();
    }
}
int main(){
    vector<string> arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<arr.size();i++){
        if(i>0&&arr[i]==arr[i-1]){
            continue;
        }
        else{
            cout<<arr[i]<<"\n";
        }
    }    
}