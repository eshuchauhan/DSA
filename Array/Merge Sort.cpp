// (lb)1 2 3 4 5 6 7 8 10 9(ub)
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int lb, int ub, int n)
{
    int ans[n];
    
    int mid=(lb+ub)/2;
    
    int i=lb;
    int j=mid+1;
    
    int k=lb;
    
    while(i<=mid and j<=ub)
    {
        if(a[i]<=a[j]) 
        {
            ans[k]=a[i];
            k++,i++;
        }
        
        else if(a[i]>a[j]) 
        {
            ans[k]=a[j];
            k++,j++;
        }
    }
    
    while(i<=mid) 
    {
        ans[k]=a[i];
        k++,i++;
    }

    while(j<=ub) 
    {
        ans[k]=a[j];
        k++,j++;
    }

    for(i=lb;i<=ub;i++)
    {
        a[i]=ans[i];
    }
}

void mergerSort(int a[], int lb, int ub, int n)
{
    if(lb<ub)
    {
    int mid=(lb+ub)/2;
    
    mergerSort(a,lb,mid,n);
    mergerSort(a,mid+1,ub,n);
    merge(a,lb,ub,n);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of Array :"<<endl;
    
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int lb=0,ub=n-1;
    
    mergerSort(a,lb,ub,n);
    
    cout<<"Sorted Array is :";
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
