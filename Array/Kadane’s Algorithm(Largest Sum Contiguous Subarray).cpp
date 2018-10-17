/*
Kadane’s Algorithm:

Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
*/
/********************* Time Comp : O(n) ***********/

void kadanealgorithm(int *arr,int n)
{
    int max=INT_MIN,maxend=0;
    for(int i=0;i<n;i++)
    {
        maxend=maxend+arr[i];
        if(max<maxend)
          max=maxend;
        if(maxend<0)
           maxend=0;
    }
    cout<<max;
}
