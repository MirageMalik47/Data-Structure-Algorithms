/**************** Time Comp : O(k) where k=31 **************/


//C++
int decToBinary(int n) 
{
    int flag = 0;
    for (int i = 31; i >= 0; i--) 
    { 
        int k = n >> i; 
        if (k & 1) 
        {
            cout << "1";
            flag=1;
        }
        else if (k & 1 == 0 && flag )
            cout << "0"; 
    } 
}


# Python 

def dectoBinary(n):
flag = False 
for i in range(31,-1,-1):
  x = n >> i 
  if( x & 1 ):
   print("1",end="")
   flag = True
    
  elif (x & 1 == 0 and flag):
   print("0",end="")
