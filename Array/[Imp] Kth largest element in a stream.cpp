/*
Given an input stream of n integers the task is to insert integers to stream and print the kth largest element in the stream at each insertion.
Example:
Input:
stream[] = {10, 20, 11, 70, 50, 40, 100, 5, ...}
k = 3
Output:    {-1,   -1, 10, 11, 20, 40, 50,  50, ...}
*/

void Kth_largest_element(int *arr,int n,int k)
{
    priority_queue<int, vector<int>, greater <int> > pq;
    for(int i=1;i<=k;i++)
        pq.push(-1);
        
    for(int i=0; i<n; i++)
    {
        if(pq.top() < arr [i])
        {
          pq.pop();
          pq.push(arr[i]);
          cout<<pq.top()<<" ";
        }
        else
         cout<<pq.top()<<" ";
    }
}
