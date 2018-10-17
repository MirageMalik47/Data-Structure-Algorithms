/*
Given an unsorted array of distinct numbers, write a function that returns true if array consists of consecutive numbers.
Examples :
Input : arr[] = {5, 4, 2, 1, 3}
Output : Yes

Input : arr[] = {5, 4, 6, 1, 3}
Output : No
*/

Approach :
1. Find Minimun Element of Array
2. Find A.P of all Elements of Array
3. Find Sum of all Elements of Array
4. If A.P == Sum gives True else False 

/******************* Time Comp : O(n) and Space Comp : o(1) *****************/

bool containsConsecutiveNumbers(int arr[], int n)
{ 
    int min=INT_MAX;
    for(int i=0 ; i < n ;i++)
    {
      if(min > arr[i])
        min=arr[i];
    }
  
    int ap = n*(2*min + (n-1)*1) /2 ; //A.P of Elements
  
    int sum = 0 ;
    for(int i=0 ; i < n ;i++)
      sum = sum + arr[i] ;
  
    if( sum == ap)
       return true;
    else
       return false;
}
