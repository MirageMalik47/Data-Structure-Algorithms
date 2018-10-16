//Given an array arr of n positive numbers. The task is to find the position where equilibrium first occurs in the array.
//Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.

/************** Time Comp : O(n) **************/

int equilibrium(int arr[], int n) 
{
  int sum=0;
  int leftsum=0;
  
  for(int i=0 ;i < n ;i++)
    sum = sum + arr[i];
  
  for(int i=0 ;i <n ;i++)
  {    
    sum = sum - arr[i];
    
    if(leftsum == sum)
      return i;
    leftsum = leftsum + arr[i];
  }
  return -1;
}
