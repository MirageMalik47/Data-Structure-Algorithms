/*
Approach: ( Example : "i like this program very much")
1. Reverse the whole string from start to end .
     "hcum yrev margrop siht ekil i"
2. Reverse the individual words 
     "much very program this like i"     
*/     

//Python 

s = input()
words = s.split(" ")
ans = []

for i in words:
  ans.insert(0,i)

for i in ans:
  print(i,end=" ")


//C++

/*************************** Time Comp : O(n) and Change in Orginal String***********************/


void  reversestring(string s)
{
    int start=0,end=s.size()-1;
    while( start < end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }

    start=0 ;
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
        }
    }
    
    cout<< s;
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


