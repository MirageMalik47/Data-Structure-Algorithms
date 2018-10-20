/*
Instead of maintaing two arrays of size n for storing left and right max of each element, 
we will just maintain two variables to store the maximum till that point. 
Since water trapped at any element = min( max_left, max_right) – arr[i] 
we will calculate water trapped on smaller element out of arr[low] and arr[high] first and move the pointers till lo doesn’t cross high.
*/

/************* Time Comp : O(n) *************/
int Trapping_Rain_Water(int *a,int n)
{
    int result=0;
    int left_max=0,right_max=0;
    int low=0,high=n-1;
    while(low<=high)
    {
        if(a[low] < a[high])
        {
            if( a[low] > left_max)
                left_max = a[low];
            else
                result+=left_max - a[low];
            low++;
        }
        else
        {
            if( a[high] > right_max )
                right_max=a[high];
            else
                result+=right_max - a[high];
            high--;
        }
    }
    return result;   
}


/**************** Time Comp : O(n) and Space Comp : O(n) ***************/

int findWater(int arr[], int n) 
{ 
    int left[n]; 
    int right[n]; 
    int water = 0;   
   
    left[0] = arr[0];                                // Fill left array 
    for (int i = 1; i < n; i++) 
       left[i] = max(left[i-1], arr[i]); 
  
    right[n-1] = arr[n-1];                           // Fill right array 
    for (int i = n-2; i >= 0; i--) 
       right[i] = max(right[i+1], arr[i]); 
    
    for (int i = 0; i < n; i++) 
       water += min(left[i],right[i]) - arr[i]; 
  
    return water; 
} 
  
