#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,i,j;
    stack<int>s,s2;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    
    for(i=0;i<n;i++)
    {
        int t=s.top();
        s.pop();
        for(j=0;j<n-1-i;j++)
        {
            s2.push(s.top());
            s.pop();
        }
        
        s.push(t);
        
        for(j=0;j<n-1-i;j++)
        {
            s.push(s2.top());
            s2.pop();
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
