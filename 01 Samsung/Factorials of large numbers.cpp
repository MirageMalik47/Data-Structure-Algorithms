#define MAX 3000

int multiply(int x,int res[], int size)
{
    int carry=0;
   
    for(int i=0;i<size;i++)
    {
        int max=res[i]*x+carry;
        res[i]=max%10;
        carry=max/10;
    }
    while(carry)
    {
        res[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}


void factorial(int n)
{
  int res[MAX];
  int size=1;
  res[0]=1;
  for(int i=2;i<=n;i++)
  {
     size=multiply(i,res,size);
  }
  for(int i=size-1;i>=0;i--)
    cout<<res[i];
}
