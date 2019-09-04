Problem Statement : https://www.geeksforgeeks.org/find-minimum-moves-reach-target-infinite-line/
/*
if ( sum is equal to target)
  return steps
  
else if (sum is greater than target)
  Case 1 : Difference is even then answer is step
  Case 2 : Difference is odd, then we take one more step
*/

/**************************** Time Comp : O(steps) *****************/

int reachTarget(int target) 
{ 
    target = abs(target);   // Handling negatives by symmetry 

    int sum = 0, step = 0; 
    while (sum < target ) 
    { 
        step++; 
        sum += step; 
    } 
    
    if( (sum - target)%2 == 0 )
      return step; 
    else 
      return step+1 ;
} 
