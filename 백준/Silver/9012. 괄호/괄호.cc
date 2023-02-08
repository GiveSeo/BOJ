#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int count;
    deque<int> deq;
    cin>>count;
    while(count){
        bool VPS=true;
        deque<int> deq;
        string temp;
        cin>>temp;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='(')
                deq.push_back(1);
            else if(temp[i]==')')
                if(deq.size()==0){
                    VPS=false;
                    break;
                }
                else{
                    deq.pop_back();
                }
        }
        if(deq.empty()&&VPS){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        count--;
    }
}
