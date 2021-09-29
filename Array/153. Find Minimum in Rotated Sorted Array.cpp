class Solution {
public:
    int findMin(vector<int>& a) {
        int n=a.size();
        int low=0,high=n-1;
        if(a[low]<a[high])
        {
            return a[low];
        }
        while(low<high)
        {
            int mid=(low+high)/2;
            if(a[high]>a[mid])
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return a[low];
    }
};
