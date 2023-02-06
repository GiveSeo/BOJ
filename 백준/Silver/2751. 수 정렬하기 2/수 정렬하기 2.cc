#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);//입출력 함수 시간 단축
    vector<int> a;//int형 vector 컨테이너 a 생성
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());//정렬
    for(int i=0;i<num;i++)
        cout<<a[i]<<"\n";
}