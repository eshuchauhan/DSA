#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll first_index(ll a[],int n,int y)
{
    int low=0,high=n;
    int index=-1;
    
    while(low<=high)
    {
        ll mid=(low+high)/2;
        
        if(a[mid]>y)
        {
            high=mid-1;
        }
        if(a[mid]<y)
        {
            low=mid+1;
        }
        if(a[mid]==y)
        {
            index=mid;
            high=mid-1;
        }
    }
    return index;
}
ll last_index(ll a[],int n,int x)
{
    int low=0,high=n;
    int index=-1;
    
    while(low<=high)
    {
        ll mid=(low+high)/2;
        
        if(a[mid]>x)
        {
            high=mid-1;
        }
        if(a[mid]<x)
        {
            low=mid+1;
        }
        if(a[mid]==x)
        {
            index=mid;
            low=mid+1;
        }
    }
    return index;
}
int main()
{
    ll n,i,j,x,y;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    
    cin>>x>>y;
    
    //number of elements greater than x and less than y
    
    int first=first_index(a,n,y);
    int last=last_index(a,n,x);
    
    cout<<first-last-1<<endl;
    
    
}
