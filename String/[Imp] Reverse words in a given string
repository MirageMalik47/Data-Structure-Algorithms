
/*
Approach: ( Example : "i like this program very much")
1. Reverse the individual words and put dot('.') in place of Space (' ')we get the below string.
  "i.ekil.siht.margorp.yrev.hcum"
2. Reverse the whole string from start to end and put Space(' ') in place of dot ('.') and you get the desired output.
     "much very program this like i"
     
*/     
/*************************** Time Comp : O(n) and Change in Orginal String***********************/

void  reverseWords(string s)
{
// Reverse the individual words and put dot('.') in place of Space (' ')
    int start=0 ;
    for(int i=0 ;i<= s.size() ;i++)
    {
        if(s[i] == ' ')
        {
            int x = start , y=i-1;
            while(x < y)
            {
                swap(s[x],s[y]);
                x++;
                y--;
            }
            start=i+1;
            s[i]='.';
        }
        else if ( i == s.size())  // For Last Word
        {
            int x = start , y=i-1;
            while(x < y)
            {
                swap(s[x],s[y]);
                x++;
                y--;
            }
            start=i+1;
            s[i]='.';
        }
    }
// Reverse the whole string from start to end and put Space(' ')
    int x = 0, y=s.size()-1;
    while(x < y)
    {
        swap(s[x],s[y]);
         x++;
         y--;
    }
    
    for(int i=0 ; i < s.size() ;i++)
    {
        if(s[i] == '.')
          s[i] = ' ' ;
    }
    cout<<s;        
}



//It only print string in reverse order wordwise , No change in Orginal String
/********************* Time Comp : O(n) ********************/
void reversestring(string s)
{
    int i, count=0;
    for(i=s.size()-1 ;i>0;i--)
    {
        if(s[i]=='.')
        {
            cout<<s.substr(i+1,count);
            cout<<".";
            count=0;
        }
        else
        {
            count++;
        }
    }
    cout<<s.substr(i,count+1);           //for last word
}

/************************* Time Comp : O(n) and Space Comp : O(n) *************/

void reverseWords(string s) 
{ 
    stack <string> p;
    istringstream x(s);
    while(x)
    {
        string word;
        x >> word ;
        p.push( word ); 
    }
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }    
} 
