/*
Approach : 
1) Build a Min Heap tree in O(n)
2) Use Extract Min k times to get k min elements from the Min Heap O(klogn)

Time complexity: O(n + klogn)
*/
/*********************** Time Comp : O(n + klogn) ***************/

int functioncall(int *arr,int n,int k)
{
    priority_queue<int, vector<int>, greater <int> > pq;           //Min Heap
    for(int i=0 ; i<n ;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=0;i<k-1;i++)
    {
        pq.pop();
    }
    return pq.top();
}
