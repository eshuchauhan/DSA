class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int required_fuel=0,extra=0,i,start=0;
       for(i=0;i<n;i++)
       {
           extra=extra+(p[i].petrol-p[i].distance);
           if(extra<0)
           {
               required_fuel+=extra;
               extra=0;
               start=i+1;
           }
       }
       if(extra+required_fuel>=0) return start;
       return -1;
    }
};
