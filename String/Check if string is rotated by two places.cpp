/*
Given two strings, the task is to find if a string ('a') can be obtained by rotating another string ('b') by two places.
Examples:
Input : a = "amazon" 
        b = "azonam"  // rotated anti-clockwise
Output : 1
Input : a = "amazon"
        b = "onamaz"  // rotated clockwise
Output : 1
*/

/**************************** Time Comp : O(n) ************************/

int rotatebytwo(string s1,string s2)
{
    string test1=s2.substr(s2.size()-2);
    string test2=s2.substr(0,2);
   if(test1+s2.substr(0,s2.size()-2)==s1 || s2.substr(2)+test2==s1)
       return 1;
    else
       return 0;
}
