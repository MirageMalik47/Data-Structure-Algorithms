/*There are n stairs, a person standing at the bottom wants to reach the top. 
The person can climb either 1 stair or 2 stairs at a time. 
Count the number of ways, the person can reach the top (order does not matter). 
Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int res = n/2 + 1;
   cout<<res<<endl;
	
	return 0;
}
