#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

bool compare(pair<int,string> a, pair<int,string> b){//비교 조건 함수
    return a.first<b.first;
} 
using namespace std;
int main(){
    int snum;
    cin>>snum;
    vector<pair<int,string>> arr;
    for(int i=0;i<snum;i++){
        int temp_age;
        string temp_name;
        cin>>temp_age>>temp_name;
        arr.push_back(make_pair(temp_age,temp_name));
    }
    stable_sort(arr.begin(),arr.end(),compare);//비교 조건에 따라 정렬 (stable_sort)
    
    for(int i=0;i<snum;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}