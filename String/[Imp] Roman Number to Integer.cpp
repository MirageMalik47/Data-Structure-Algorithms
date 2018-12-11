/************************ Time Comp : O(n) ***************/

int table(char ch)
{
    if(ch=='I')
     return 1;
    if(ch=='V')
     return 5;
    if(ch=='X')
     return 10;
    if(ch=='L')
     return 50;
    if(ch=='C')
     return 100;
    if(ch=='D')
     return 500;
    if(ch=='M')
     return 1000;
    else
     return 0 ;
}
int roman_to_int(string s)
{
    int ans = 0;
    for(int i=0 ; i<s.size() ;i++)
    {
        if( table(s[i]) < table(s[i+1]) )
        {
            ans += table(s[i+1]) - table(s[i]) ;
            i++;
        }  
        else 
          ans += table(s[i]) ;
    }
    return ans ;
}
 
