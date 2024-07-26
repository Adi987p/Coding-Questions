//https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1?page=1&company=D-E-Shaw&sortBy=submissions

int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int platform_needed=1,result=1;
    	int i=1,j=0;
    	
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        platform_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j])
    	    {
    	        platform_needed--;
    	        j++;
    	    }
    	    
    	    if(platform_needed>result)
    	        result=platform_needed;
    	}
    	return result;
    	
    }
