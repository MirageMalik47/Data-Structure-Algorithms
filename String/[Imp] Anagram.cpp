/*
Method 2 (Count characters)
This method assumes that the set of possible characters in both strings is small. In the following implementation, 
it is assumed that the characters are stored using 8 bit and there can be 256 possible characters.
1) Create count arrays of size 256 for both strings. Initialize all values in count arrays as 0.
2) Iterate through every character of both strings and increment the count of character in the corresponding count arrays.
3) Compare count arrays. If both count arrays are same, then return true.

*/
/************************** Time Comp : O(n) *****************/

bool Anagram(string s1, string s2)
{
    int count[256]={0};
    int i;
    for(i=0 ; s1[i] && s2[i] ;i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    if(s1[i] || s2[i]) //if strings of different Length
     return false ;
     
    for(i=0 ; i<256 ;i++)
    {
        if(count[i])
         return false;
    }
    return true ;
}



/*********************** Hash Map Approach  ******************/
bool Anagram(string s1, string s2)
{
    unordered_map <int ,int > m;
    for(int i=0 ; i<s1.size() ;i++)
    {
        if(m.count(s1[i]) == 0)
           m[s1[i]]=1 ;
        else
           m[s1[i]]++ ;
    }
    
    for(int i=0 ;i<s2.size() ;i++)
    {
        if(m.count(s2[i]) == 1 && m[s2[i]] == 1)
          m.erase(s2[i]) ;
        else if(m.count(s2[i]) == 1) 
          m[s2[i]]--;
        else
        return false ;
    }
    
    if( m.empty() )
       return true ;
    else   
       return false ;
    
}
