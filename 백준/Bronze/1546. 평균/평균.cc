#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double N;
    double arr[1000];
    
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    double sum=0;
    double max_num=-1;
    
    for(int i=0;i<N;i++){
        sum+=arr[i];
        max_num=max(max_num,arr[i]);
    }    
    double A=(sum*100.0/max_num)/N;
    cout<<A<<endl;
    

    return 0;
}
