// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&company=D-E-Shaw,Uber&difficulty=Easy,Medium&sortBy=submissions

vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long sum1=0;
        long long sum2=0;
        long long x;
        long long y;
        long long z;
        for(int i=0;i<n;i++)
        {
          sum1+=arr[i];
          sum2+=arr[i]*1ll*arr[i];
        }
        x=(n*1ll*(n+1))/2 - sum1;
        y=(n*1ll*(n+1)*1ll*(2*n+1))/6-sum2;
        z=y/x;
        return {(z-x)/2,(z+x)/2};
    }
