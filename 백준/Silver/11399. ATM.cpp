#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int N;cin>>N;
    vector<int> arr(N);vector<int> S(N);//부분 합
    int ans=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=1;i<N;i++){
        int change_point=i;
        int change_value=arr[i];
        for(int k=i-1;k>=0;k--){
            if(arr[k]<arr[i]){
                change_point=k+1;
                break;
            }
            if(k==0){
                change_point=0;
            }
        }
        for(int l=i;l>change_point;l--){
            arr[l]=arr[l-1];
        }
        arr[change_point]=change_value;
    }
    S[0]=arr[0];
    ans=S[0];
    for(int i=1;i<N;i++){
        S[i]=arr[i]+S[i-1];
        ans+=S[i];
    }
    cout<<ans<<endl;
}
