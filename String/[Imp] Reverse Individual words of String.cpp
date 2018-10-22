
/************************** Time Comp : O(n) and Changes in Orginal Array ********************************/

void reverseWords(string s) 
{ 
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


//Using stringstream in C++ :
/***************** Time Comp :O(n) Space Comp : O(n) ***************/

#include<bits/stdc++.h>
using namespace std;


void singlewordreverse( string x)
{
    int start=0 , end=x.size()-1;
    while(start<end)
    {
        swap(x[start],x[end]);
        start++;
        end--;
    }
    cout<<x<<" ";
}

void  ReverseWordstring(string s)
{
    istringstream x(s);
    while(x)
    {
        string word ;
        x >> word ;
        singlewordreverse( word );
    }
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();       // cin.ignore() Clean Buffer to avoid confusion between  
	while(t--)          // integer 't' and string s are diff variables 
	{	  
	  string s ;
	  getline(cin,s);
	  ReverseWordstring(s);
	  cout<<endl;
	}
	return 0;
}



// It Print Word in reverse order , it cann't change in original array 
/************************** Time Comp : O(n) ********************************/

void singlewordreverse( string x)
{
    int start=0 , end=x.size()-1;
    while(start<end)
    {
        swap(x[start],x[end]);
        start++;
        end--;
    }
    cout<<x<<" ";
}

void reverseWords(string s) 
{ 
    int start=0 , end=0;
    for(int i=0 ;i<= s.size() ;i++)
    {
        if(s[i] == ' ')
        {
            singlewordreverse( s.substr( start,end) );
            start=i+1;
            end=0;
        }
        else if ( i == s.size())
        {
            singlewordreverse( s.substr( start,end) );
        }
        end++;
    }
} 



