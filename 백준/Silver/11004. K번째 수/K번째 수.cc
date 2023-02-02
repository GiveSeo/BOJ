#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);    
    vector<int> A;
    int num;
    int K;
    cin>>num>>K;
    for(int i=1;i<=num;i++){
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    sort(A.begin(),A.end());
    cout<<A[K-1];
}