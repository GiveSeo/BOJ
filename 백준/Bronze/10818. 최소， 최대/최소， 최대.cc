#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);   
    int max=-1000001;//최소값
    int min=1000001;//최댓값
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int temp;
        cin>>temp;
        if(max<temp)//최댓값보다 크면 그값을 최댓값으로 함.
            max=temp;
        if(min>temp)//최솟값바다 작으면 그값을 최솟값으로 함.
            min=temp;
    }
    cout<<min<<" "<<max;
    
}
