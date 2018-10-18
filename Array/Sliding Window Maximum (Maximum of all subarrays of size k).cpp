/****************** Time Comp : O(n) *******************/


void slidingwindow(int *arr, int n, int k)
{
  deque <int> q(k);
  int i;
  for( i = 0 ;i < k ; i++)                                // Process first k (or first window) elements of array 
  {
      while(!q.empty() && arr[i] >= arr[q.back()])        //For very element, the previous smaller elements are useless so 
          q.pop_back();
      
      q.push_back(i);                                     // Add current element at the rear of q 
  }
  
  for( i = k ; i < n ; i++)                               // Process rest of the elements, i.e., from arr[k] to arr[n-1] 
  {
      cout<<arr[q.front()]<<" ";
      
      while ( !q.empty() && q.front() <= i-k)             // Remove the elements which are out of this window 
          q.pop_front();
           
      while(!q.empty() && arr[i] >= arr[q.back()])        //For very element, the previous smaller elements are useless so 
          q.pop_back();
      
      q.push_back(i);                                     // Add current element at the rear of q 
      
  }
  cout<<arr[q.front()]<<" ";                              // Print the maximum element of last window 
}
