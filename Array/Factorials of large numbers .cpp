class Solution {
public:
    vector<int> factorial(int n){
        // code here
        vector<int>v;
        v.push_back(1);
        for(int i=2;i<=n;i++)
        {
            int carry=0;
            for(int j=0;j<v.size();j++)
            {
                int x=v[j]*i+carry;
                
                v[j]=x%10;
                
                carry=x/10;
            }
            
            while(carry!=0)
            {
                v.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(v.begin(),v.end());
          return v;
    }
};
