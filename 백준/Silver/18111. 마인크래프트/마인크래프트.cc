// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 64000000

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int arr[500][500]={0,};
    int N,M,B;
    cin>>N>>M>>B;
    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            cin>>arr[i][k];
        }
    }
    vector<int> ans(2, MAX);
    for(int i=0;i<=256;i++){
        int time=0;
        int block=B;
        for(int k=0;k<N;k++){
            for(int l=0;l<M;l++){
                if(i<arr[k][l]){
                   time+=(2*(arr[k][l]-i));
                   block+=(arr[k][l]-i);
                }
            }
        }
        bool lack_blocks = false;
        for(int k=0;k<N;k++){
            for(int l=0;l<M;l++){
                if(i>arr[k][l]){
                    if(block<(i-arr[k][l])){
                        lack_blocks = true;
                        break;
                    }
                    time+=(i-arr[k][l]);
                    block-=(i-arr[k][l]);
                }
            }
            if(lack_blocks) break;
        }
        if(!lack_blocks && ans[0]>=time){
            ans[0]=time;
            ans[1]=i;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
