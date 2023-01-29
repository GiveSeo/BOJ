#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=num;i>0;i--)
        cout<<i<<"\n";//std::endl의 경우 버퍼를 비우는 과정이 있어서 "\n"을 쓰는 것보다 느리다.(실제로 std::endl를 쓰면 시간초과임.)
}
