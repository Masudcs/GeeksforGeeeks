#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        float r=pow(N,1.0/3.0);
        r=(int)r;
        cout<<r<<endl;
    }
    return 0;
}
