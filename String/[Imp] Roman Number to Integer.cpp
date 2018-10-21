/************************ Time Comp : O(n) ***************/

int  index (char ch)
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
    return 0;
}

void romontointeger(string s)
{
    int sum=0;
    int i=0;
    while( i<s.size() )
    {
        if( index(s[i]) >= index(s[i+1]))
        {
            sum += index(s[i]);
        }
        else
        {
            sum += index(s[i+1]) - index(s[i]);
            i++;
        }
        i++;
    }
    cout<<sum;
}
 
