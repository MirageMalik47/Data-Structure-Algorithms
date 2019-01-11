
// Given an integer array A of size n. Find and print all the leaders present in the input array. 
// An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) 
// are less than or equal to A[i].


/************* Time Comp : O(n) ********************/

// C++

void printLeaders(int *arr, int n)
{
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if( arr[i] > max )
        {
            max=arr[i];
        }
        else
           arr[i]=INT_MAX;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=INT_MAX)
          cout<<arr[i]<<" ";
    }
}

//Python 


