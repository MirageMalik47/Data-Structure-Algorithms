Problem Statement : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

/************************ Time Comp : O(n) ********************/

void kadanealgorithm(int *arr,int n)
{
    int max=INT_MIN,maxend=0;
    for(int i=0;i<n;i++)
    {
        
        if(max<maxend)
          max=maxend;
        if(maxend<0)
           maxend=0;
    }
    cout<<max;
}


/******************** Time Comp : O(n) ************************/
Problem Statement: To print the subarray with the maximum sum, we maintain indices whenever we get the maximum sum.

int maxSubArraySum(int a[], int size) 
{ 
    int max = INT_MIN, maxending = 0, 
       start =0, end = 0, s=0; 
  
    for (int i=0; i< size; i++ ) 
    { 
        maxend=maxend+arr[i];
  
        if (max < maxend) 
        { 
            max = maxend; 
            start = s; 
            end = i; 
        } 
  
        if (maxend < 0) 
        { 
            maxend = 0; 
            s = i + 1; 
        } 
    } 
    cout << max << endl; 
    cout << start << " " << end << endl; 
} 
