// Given an array of positive integers. Reverse every sub-array of K group elements.
/******************* Time Comp : O(n) *******************/

void reversearraybyk(int arr[], int n ,int k)
{
    int start;
    int end;
    for(int i=0;i<n;i=i+k)
    {
      start=i;
      if(i+k-1<n)
        end=i+k-1;
      else
        end=n-1;
      while(start!=end)
      {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        if(end<start)
         break;
      }      
    }
}
