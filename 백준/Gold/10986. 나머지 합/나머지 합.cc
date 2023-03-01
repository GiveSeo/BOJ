#include <iostream>
using namespace std;
#include <vector>
int main()
{
  int M,N;
  cin>>N>>M;
  long long count=0;
  vector<long long> arr(N,0);
  vector<long long> s(M,0);
  cin>>arr[0];
  
  for(int i=1;i<N;i++){
    long long temp;
    cin>>temp;
    arr[i]=temp+arr[i-1];
  }
  
  for(int i=0;i<N;i++){
    long long re=arr[i]%M;
    if(re==0){
      count++;
      s[re]++;
    }
    else{
      s[re]++;
    }
  }
  for(int i=0;i<M;i++){
    if(s[i]>1)
       count+=(s[i]*(s[i]-1))/2;
  }
  cout<<count;
}