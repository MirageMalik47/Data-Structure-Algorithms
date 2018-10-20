// Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a^2 + b^2 = c^2.
/* 
Approach : 
 1. Do square of every element in input array. This step takes O(n) time.
 2. Sort the squared array in increasing order. This step takes O(nLogn) time.
 3. To find a triplet (a, b, c) such that a^2 + b^2 = c^2
*/

/***************** Time Comp : O(n^2) ************/
bool Pythagorean_Triplet(int *arr , int n)
{
   sort(arr,arr+n);
   
   for(int i = n-1; i >= 2; i--)
    {
        int l = 0;
        int r = i-1;
        while(l < r)
        {
            if(arr[l] + arr[r] == arr[i])
            {
                return true;
            }
            else if(arr[l] + arr[r] < arr[i])
                l++;
            else if(arr[l] + arr[r] > arr[i])
                r--;
        }
    }
    return false;
}
int main()
{
   int n;
   cin>>n;
   int *arr= new int[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   Pythagorean_Triplet(arr,n) ? cout<<"Yes" : cout<<"No" ;
   return 0;
}
