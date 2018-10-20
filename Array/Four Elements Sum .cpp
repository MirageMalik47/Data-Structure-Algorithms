/************************ Time Comp : O(n^3) **************/

bool tripletSum(int arr[], int n, int sum) 
{ 
    sort(arr, arr + n); 
    int l,r;
    for (int i = 0; i < n - 3; i++) 
    { 
       for(int j=i+1 ; j < n -2 ;j++)
       {
          l = j + 1;                               // index of the first element in the remaining elements  
          r = n - 1;                               // index of the last element 
        
         while (l < r) 
         { 
            if (arr[i] arr[j] + arr[l] + arr[r] == sum) 
            { 
                cout<<arr[i] <<arr[j] <<arr[l] << arr[r] ;
                return true; 
            } 
            else if (arr[i] arr[j] + arr[l] + arr[r] < sum) 
                l++; 
            else if(arr[i] arr[j] + arr[l] + arr[r] > sum)                          
                r--; 
         } 
       }
    } 
    return false; 
}
