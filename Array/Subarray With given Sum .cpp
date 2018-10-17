/***************** Time Comp : O(n) ***************/

void indexofsum(int arr[],int n,int sum)
{
    int curr_sum=0,start=0;
    for(int i=0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        while( curr_sum > sum && start <= i)
        {
            curr_sum=curr_sum-arr[start];
            start++;
        }
        if( curr_sum==sum )
        {
          cout<<start <<" " << i ;
           break;
        }
    }
}
