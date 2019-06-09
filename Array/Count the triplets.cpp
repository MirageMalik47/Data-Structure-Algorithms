Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

/***************** Time Comp : O(n^2) *****************/

int counttriplets ( int *arr, int n )
{
  int count = 0 ;  
  sort(arr, arr+n);
  for(int i = n-1 ; i>=0 ;i--)
  {
          int j=0;
          int k= i-1;
          while(j<k)
          {
              if(arr[i] == arr[j] + arr[k])
              {
                  count++;
                  j++,k--;
              }
              else if (arr[i] > arr[j] + arr[k])
                  j++;
                 
              else if (arr[i] < arr[j] + arr[k]) 
                  k--;
              
           }
    }
    return count ; 
}
