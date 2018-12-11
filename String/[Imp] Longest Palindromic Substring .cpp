
/********************************** Time Comp : O(n)*********************************************/

 NOTE :: Manacher’s Algorithm – Linear Time Longest Palindromic Substring 
 Code Link : https://www.hackerearth.com/practice/algorithms/string-algorithm/manachars-algorithm/tutorial/ 


/*************************** Time Comp : O(n^2) and Space Comp : O(1) ***********************/

void Longest_Palindrome_string(string s)
{
    int start=0,max=1;
    int low,high;

    for(int i=1;i<s.size();i++)
    {
        low=i-1;  // Find the longest even length palindrome with center points as i-1 and i.
        high=i;   
        while(low>=0 && high<len && s[low]==s[high])
        {
            if(max < high-low+1)
            {
              max=high-low+1;
              start=low;
            }
            --low;
            ++high;
        }
     
        low=i-1;
        high=i+1;
        while(low>=0 && high<len && s[low]==s[high]) // Find the longest odd length palindrome with center point as i 
        {
            if(max < high-low+1)
            {
              max=high-low+1;
              start=low;
            }
            --low;
            ++high;
        }      
    }
 
    for(int i=start ;i<start+max; i++)
    {
        cout<<s[i];
    }
}
