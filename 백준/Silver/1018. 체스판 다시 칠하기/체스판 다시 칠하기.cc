#include <iostream>
#include <algorithm>
#include <vector>
#define A 10000000
using namespace std;
int main(){
    char top_black[8][8]={{'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'}};
    char top_white[8][8]={{'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'},
                        {'W','B','W','B','W','B','W','B'},
                        {'B','W','B','W','B','W','B','W'}};
    int count=64;
    char arr[52][52];
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i+8<=N;i++){
        for(int j=0;j+8<=M;j++){
            int b_count=0;
            int w_count=0;
            for(int k=i;k<i+8;k++){
                for(int l=j;l<j+8;l++){
                    if(arr[k][l]!=top_black[k-i][l-j]){
                        b_count++;
                    }
                    if(arr[k][l]!=top_white[k-i][l-j]){
                        w_count++;
                    }                    
                }
            }
            b_count=min(b_count,w_count);
            count=min(count,b_count);
        }
    }
    cout<<count<<endl; 
}
