//Sort all even numbers in ascending order and then sort all odd numbers in descending order

Algorithms : Negative Multiple approach. 
1. Make all odd numbers negative.
2. Sort all numbers.
3. Revert the changes made in step 1 to get original elements back.

/***************** Time Comp : O(nlogn) *******************/

void Sortoddeven(int arr[], int n) 
{    
  for (int i=0 ; i<n ; i++)    // Make all odd numbers negative 
      if (arr[i] % 2 =!= 0)   // Check for odd 
          arr[i] *= -1; 
            
  sort(arr, arr+n);  
    
  for (int i=0 ; i<n ; i++)        // Retaining original array 
      if (arr[i] % 2 != 0)     
          arr[i] *= -1; 
} 

