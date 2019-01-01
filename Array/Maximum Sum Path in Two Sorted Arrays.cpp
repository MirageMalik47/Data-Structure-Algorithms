/*Given 2 sorted arrays (in increasing order), find a path through the intersections that produces maximum sum and return the maximum sum.
That is, we can switch from one array to another array only at common elements.

Approach : 
The idea is to do something similar to merge process of merge sort. We need to calculate sums of elements between all common points 
for both arrays. Whenever we see a common point, we compare the two sums and add the maximum of two to the result.*/


/************************* Time Comp : O(n+m) *********************/

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    int i = 0, j = 0; 
    int  result = 0, sum1 = 0, sum2 = 0; 

    while (i < m && j < n) 
    { 
        if (ar1[i] < ar2[j]) 
            sum1 += ar1[i++]; 

        else if (ar1[i] > ar2[j]) 
            sum2 += ar2[j++]; 
  
        else if (ar1[i] == ar2[j])    // common point 
        { 
            result += max(sum1, sum2); 
            sum1 = 0, sum2 = 0; 
  
            
            while (i < m &&  j < n && ar1[i] == ar2[j])  // Keep updating result while  
            {                                            // there are more common elements 
                result = result + ar1[i]; 
                i++ ;
                j++; 
            } 
        } 
    }    
    while (i < m)     // Add remaining elements of ar1[] 
        sum1  +=  ar1[i++]; 
      
    while (j < n)    // Add remaining elements of ar2[] 
        sum2 +=  ar2[j++]; 

    result +=  max(sum1, sum2); 
  
    return result;       
}    
