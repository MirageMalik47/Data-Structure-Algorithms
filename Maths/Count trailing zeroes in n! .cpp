// Approach :
// Trailing 0s in n! = Count of 5s in prime factors of n!
//                  = floor(n/5) + floor(n/25) + floor(n/125) + ....

//C++

int findTrailingZeros(int n) 
{ 
    int count = 0; 
    for (int i = 5; n / i >= 1; i = i * 5)  // Keep dividing n by powers of 5 and update count  
        count += n / i;   
    return count; 
} 

//Python 

def trailing_Zero(n):
  count = 0
  i=5
  while n/i > 1 :
    count += int( n/i )
    i *= 5
  return int(count)  
