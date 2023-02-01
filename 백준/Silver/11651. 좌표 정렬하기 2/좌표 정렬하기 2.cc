#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool compare(pair<int, int> a,pair<int, int> b){//정렬 조건 함수
    if(a.second==b.second){
        return b.first>a.first;
    }
    else{
        return b.second>a.second;
    }
}

int main(){
    vector<pair<int,int>> a;//pair<int, int>형 vector 컨테이너 생성
    int num;
    cin>>num;
    
    for(int i=1;i<=num;i++){
        int temp1, temp2;
        cin>>temp1>>temp2;
        a.push_back(make_pair(temp1,temp2));//정수를 입력받고 vector컨테이너에 pair 넣기
    }
    sort(a.begin(),a.end(),compare);//compare 함수 정렬기준에 따라 정렬
    for(int i=0;i<num;i++)
        cout<<a[i].first<<" "<<a[i].second<<"\n";
}