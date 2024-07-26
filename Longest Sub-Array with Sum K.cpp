//https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        
        //for only non-negative integers another 
        //two pointer approach shrinking and expanding;
        
        int sum=0;
        int maxlen=0;
        map<int,int>m;
        
        for(int i=0;i<N;i++)
        {
          sum+=A[i];
          
          if(sum==k)
            maxlen=max(maxlen,i+1);
          
          int rem=sum-k;
          if(m.find(rem)!=m.end())
          {  int len=i-m[rem];
          maxlen=max(maxlen,len);}
          
          if(m.find(sum)==m.end())
          {
              m[sum]=i;
          }
          
        }
        return maxlen;
    }
