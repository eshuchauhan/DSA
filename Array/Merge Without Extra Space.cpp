void merge(long long a1[], long long a2[], int n, int m) 
        { 
            long long i=n-1,j=0;
            while(i>=0 && j<m)
            {
                if(a1[i]>a2[j])
                {
                swap(a1[i],a2[j]);
                i--,j++;
                }
                else
                {
                    break;
                }
            }
            sort(a1,a1+n);
            sort(a2,a2+m);
        } 
