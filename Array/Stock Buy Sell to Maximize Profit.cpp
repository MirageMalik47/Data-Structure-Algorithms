/*
The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days. 
For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, the maximum profit can earned by buying on day 0, selling on day 3. 
Again buy on day 4 and sell on day 6. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.
*/

/*********************** Time Comp : O(n) ****************************/
void StockBS(int *arr,int n)
{
    int start=0,end=0;
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[start] && arr[i] > max)
        {
           max=arr[i];
           end=i;
        }
        else
        {
            if(end > start)
              cout<< start << " " << end ;
                
            start = i;
            max = arr[start]; 
        }
    }
    if(end == n-1)
       cout<< start <<" "<< end ;
    
}
