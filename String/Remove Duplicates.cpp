/*
Given a string, remove duplicates from it. Note that original order of characters must be kept same. 
Expected time complexity O(n) where n is length of input string and extra space O(1) under the assumption that 
there are total 256 possible characters in a string.
*/

/************************ Time Comp : O(n) & Space Comp : O(256) *******************/

void remove_duplicates(string s)
{
    int count[256]={0};
    
    for(int i=0; i<s.size(); i++)
    {
        if(count[s[i]] == 0)
          count[s[i]] = 1;
        else
          count[s[i]]++;
    }
    
    for(int i=0;i<s.size(); i++)
    {
        if(count[s[i]] == 1)
          cout<<s[i];
        else if(count[s[i]] > 1)
        {
            cout<<s[i];
            count[s[i]] = INT_MIN;
        }
    }
}
