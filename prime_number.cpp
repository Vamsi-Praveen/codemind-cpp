#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    for(int i=2;i<int((pow(n,0.5))+1);i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"not a prime";
    }
    else
    {
        cout<<"prime";
    }
}
