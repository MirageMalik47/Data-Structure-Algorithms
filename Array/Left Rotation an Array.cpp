/*
Algorithm :

rotate(arr[], d, n)

reverse(arr[], 0, d) ;
reverse(arr[], d , n-1);
reverse(arr[], 0, n-1);

Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is :
Reverse A to get ArB, where Ar is reverse of A.
Reverse B to get ArBr, where Br is reverse of B.
Reverse all to get (ArBr) r = BA.

Example :
Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7
A = [1, 2] and B = [3, 4, 5, 6, 7]

Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]           
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

void leftrotationofarray(int arr[] , int n , int d)
{
    helper(arr,0,d-1);
    helper(arr,d,n-1);
    helper(arr,0,n-1);    
}
