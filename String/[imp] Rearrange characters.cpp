/*
Given a string S with repeated characters (only lowercase). 
The task is to rearrange characters in a string such that no two adjacent characters are same.

Example:
Input:                     Output:
geeksforgeeks              1          
bbbabaaacd                 1
bbbbb                      0
*/

/******************** Time Comp : O(n) and Space Comp: O(256) *************/

bool Rearrangestr(string s,int n)
{
    int arr[256] ={0};
    for(int i=0 ; i<n ; i++)
       arr[s[i]]++;
       
    int count ;   
    if( n%2 == 0)
      count = n/2 ;
    else
      count = n/2 + 1 ;
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[s[i]] > count)
        {
            return 0 ;
        }
    }
    return 1;
}
