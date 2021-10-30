class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item u,Item v)
    {
        double w1=(double)u.value/(double)u.weight;
        double w2=(double)v.value/(double)v.weight;
        return w1>w2;
    }
    double fractionalKnapsack(int w, Item a[], int n)
    {
        // Your code here
        sort(a,a+n,comp);
        double ans=0.0;
        
        for(int i=0;i<n && w>0;i++)
        {
            if(a[i].weight<=w)
            {
                ans=ans+a[i].value;
                w=w-a[i].weight;
            }
            else
            {
                double fraction=w*1.0/a[i].weight;
                ans=ans+a[i].value*fraction;
                break;
            }
        }
        return ans;
    }
        
};


