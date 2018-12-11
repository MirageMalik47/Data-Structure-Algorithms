//Given a string s, recursively remove adjacent duplicate characters from the string s. 
//The output string should not have any adjacent duplicates. 
//  Input:
//  geeksforgeek
//  acaaabbbacdddd
//  Output:
//  gksforgk
//  acac

/************************** Time Comp : O(n) ??  ************************/

string recursive_duplicate(string str)
{
    string temp; 
    if(str[0]!=str[1])
    {
        temp += str[0];
    }

    for( int i=1 ; i<n ;i++)
    {
        if(str[i]!=str[i-1] && str[i]!=str[i+1])
           temp += str[i];
    }
    
    if(temp.size()!=str.size())
        return recursive_duplicate(temp);         //Recursive Call for Test Case like "mississipie" 
    
    return temp;
}
