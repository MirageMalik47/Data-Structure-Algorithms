//Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

/***************************** Time Comp : O(n) **********************/

int helper(string arr)
{
    int i=0,ans=0,len=arr.size();
    int sign=1;
    if(arr[0]=='-')
    {
        sign=-1;
        i++;
        len--;
    }
    while(len!=0)
    {
        ans=ans+(arr[i++]-'0')*pow(10,len-1);
        len--;
    }
    return sign*ans;
}

int atoi(string str)
{
    int i=0,k=1;
    if(str[i]=='-')
      i++;
    
    for(int j=i;j<str.length();j++)
    {
        if(str[j]<48 ||str[j]>57)
        {
           k=0; 
           break;
        }
    }
    if(k==1)
        return helper(str);
    else
        return -1;
}
