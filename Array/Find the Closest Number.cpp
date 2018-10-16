//The task is to find the closest value to the given number in array. Array may contain duplicate values.
//Note: If the difference is same for two values print the value which is greater than the given number.

/********************** Time Comp O(n) ***********************/

int closestnumber(int arr[],int n,int k)
{
    int ans,diff=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-k)<=diff)
        {
            ans=arr[i];
            diff=abs(arr[i]-k);
        }
    }
    return ans;
}
