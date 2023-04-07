// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> A(N);
    vector<int> B(N);
    
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        cin>>B[i];
    }
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end());
    int total=0;
    for(int i=0;i<N;i++){
        total+=(A[i]*B[i]);
    }
    cout<<total<<endl;
    
}