#include <iostream>
using namespace std;
#include <vector>

int main()
{
  cin.tie(NULL);cout.tie(NULL);
  ios::sync_with_stdio(false);
  int arr[1025][1025]={0,};
  int karr[1025][1025]={0,};
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int k=1;k<=n;k++){
      cin>>arr[i][k];
      karr[i][k]=arr[i][k]+karr[i-1][k]+karr[i][k-1]-karr[i-1][k-1];
    }
  }
  
  for(int i=0;i<m;i++){
    int X1,Y1,X2,Y2;
    cin>>X1>>Y1>>X2>>Y2;
    int re=karr[X2][Y2]-karr[X1-1][Y2]-karr[X2][Y1-1]+karr[X1-1][Y1-1];
    cout<<re<<"\n";
  }
}