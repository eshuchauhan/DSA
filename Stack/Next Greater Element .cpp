class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, long long n){
        // Your code here
        stack<long long>s;
        vector<long long>v;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top()>a[i])
            {
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=a[i])
            {
                while(s.size()>0 && s.top()<=a[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top());
                }
            }
            s.push(a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
