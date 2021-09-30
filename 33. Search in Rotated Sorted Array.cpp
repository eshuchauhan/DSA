#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,i,target;
    cin>>n>>target;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    ll low=0,high=n-1;
    ll mid;
    bool flag=false;
    while(low<=high)
    {
        mid=(high+low)/2;
        
        if(a[mid]==target)
        {
            flag=true;
            cout<<mid<<endl;
            break;
        }
        if(a[low]<=a[mid])
        {
            if(target>=a[low] && target<=a[mid])
            {
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        else if(a[low]>a[mid])
        {
            if(target>=a[mid] && target<=a[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    if(flag==false)
    {
        cout<<-1<<endl;
    }
}
