
/*
Algorithm :
rotate(arr[], d, n)

reverse(arr[], 0, n-1) ;
reverse(arr[], 0 , d-1);
reverse(arr[], d, n-1);       
*/

/**************** Time Comp : O(n) ****************/


void helper (int arr[] , int start , int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++ ;
        end-- ;
    }
}

void rightrotationofarray(int arr[] , int n , int d)
{
    helper(arr,0,d-1);
    helper(arr,d,n-1);
    helper(arr,0,n-1);    
}
