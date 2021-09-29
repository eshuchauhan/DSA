class Solution {
public:
    bool isValid(string s) {
        stack<int>stak;
        int flag=1,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                stak.push(s[i]);
            }
            else
            {
                if(stak.empty())
                {
                    flag=0;
                    break;
                }
                else
                {
                    char c=stak.top();
                    stak.pop();
                    if((c=='(' && s[i]==')') || (c=='{' && s[i]=='}') || (c=='[' && s[i]==']'))
                    {
                        continue;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==1 && stak.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
