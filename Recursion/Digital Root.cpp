Input:
n = 99999
Output: 9
Explanation: Sum of digits of 99999 is 45
which is not a single digit number, hence
sum of digit of 45 is 9 which is a single
digit number.

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        //Your code here
        if(n<=9)
        {
            return n;
        }
        
        return digitalRoot(n%10+n/10);
    }
};
