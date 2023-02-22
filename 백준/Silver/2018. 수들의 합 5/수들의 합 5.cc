#include <algorithm>
#include <iostream>

using namespace std;

int main()//투 포인터 알고리즘
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int first_index=1;
    int end_index=1;
    int sum=first_index;
    int N;
    int count=1;
    cin>>N;
    while(end_index!=N){
        if(sum==N){
            count++;
            end_index++;
            sum+=end_index;
        }
        else if(sum<N){
            end_index++;
            sum+=end_index;
        }
        else{
            sum-=first_index;
            first_index++;            
        }
    }
   
    cout<<count<<"\n";

    return 0;
}
