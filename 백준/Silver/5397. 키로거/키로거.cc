#include <iostream>
#include <string>
#include <list>
using namespace std;

int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        list<char> l;
        string temp;
        cin>>temp;
        auto p = l.begin();
        for(auto c : temp){
            if(c == '<'){
                if(p!=l.begin()){
                    p--;
                }
            }
            else if(c == '>'){
                if(p!=l.end()){
                    p++;
                }
            }
            else if(c == '-'){
                if(p!=l.begin()){
                    p--;
                    p=l.erase(p);//erase는 삭제 후 그 다음 원소를 가리킴
                }
            }
            else if(c == '\n'){}
            else{
                l.insert(p,c);
            }
        }
        for(auto c : l){
           cout<<c;
        }
        cout<<"\n";
    }
}
