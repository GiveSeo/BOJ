
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p_num[1001]={0, };
    int m_num[1001]={0, };
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp_num;
        cin>>temp_num;
        if(temp_num<0)
            m_num[-temp_num]=1;
        else
            p_num[temp_num]=1;
    }
    
    for(int i=1001;i>0;i--){
        if(m_num[i]==1){
            cout<<-i<<"\n";
        }
    }
    for(int i=0;i<1001;i++){
        if(p_num[i]==1){
            cout<<i<<"\n";
        }
    }

    return 0;
}
