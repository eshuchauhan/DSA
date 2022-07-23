#include <bits/stdc++.h>
using namespace std; 
  
void helper(int a[], int n) 
{ 
    for(int i=0;i<n;i++)
    {
        int x=abs(a[i])-1;
        
        if(a[x]<0) cout<<x+1<<endl;
        else a[x]=-a[x];
    }
} 
  
int main()
{
    int n,i,j;
    cin>>n;
    
    int a[n];
    
    for(i=0;i<n;i++) cin>>a[i];
    
    helper(a,n);
}
