// Given a string S, find the largest substring with no repetition i.e. largest substring which contain all unique characters.


/****************** Time Comp : O(n) and Auxillary Space  : O(n) ********************/

string findLongestSubstring(string str) 
{ 
    int i; int n = str.length(); 
    int st = 0;   // starting point of current substring.
    int currlen;  // length of current substring. 
    int maxlen = 0; //maximum length substring without repeating characters.   
    int start;  // starting index of maximum length substring.
  
    unordered_map<char, int> pos; //Hash Map to store last occurrence of eachalready visited character. 
 
    pos[str[0]] = 0;  // Last occurrence of first character is index 0; 
  
    for (i = 1; i < n; i++) 
    { 
        if (pos.find(str[i]) == pos.end())  // If this character is not present in hash,
            pos[str[i]] = i;                //  then Store Last occurrence in hashmap
  
        else 
        { 
            // If this character is present in hash then 
            // this character has previous occurrence, 
            // check if that occurrence is before or after 
            // starting point of current substring. 
            if (pos[str[i]] >= st) 
            { 
                currlen = i - st;     // find length of current substring and 
                if (maxlen < currlen) // update maxlen and start accordingly. 
                { 
                    maxlen = currlen; 
                    start = st; 
                } 
                
                st = pos[str[i]] + 1;   // Next substring will start after the last 
            }                           // occurrence of current character
  
            pos[str[i]] = i;   // Update last occurrence of current character
        } 
    } 
    if (maxlen < i - st)      // Compare length of last substring with maxlen
    {                        // update maxlen and start accordingly 
        maxlen = i - st; 
        start = st; 
    } 
    return str.substr(start, maxlen); 
} 
