/*
Approach : 
1) Build a Max Heap tree in O(n)
2) Use Extract Max k times to get k maximum elements from the Max Heap O(klogn)

Time complexity: O(n + klogn)
*/

void kthLargest(int *arr, int n, int k)
{
    priority_queue <int> pq;
    for(int i = 0 ; i < n ; i++)
       pq.push(arr[i]);
    
    for(int i=0 ; i < k-1 ;i++)
       pq.pop() ;
    
    cout<<pq.top() ;
    
}
