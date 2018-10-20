//Given arrival and departure times of all trains that reach a railway station. 
//Your task is to find the minimum number of platforms required for the railway station so that no train waits.
//Note: Consider that all the trains arrive on the same day and leave on the same day. 
//Also, arrival and departure times must not be same for a train.

/************************* Time Comp : O(nlogn) possibly ************************/

int findPlatform(int arr[], int dep[], int n) 
{ 
	multimap<int, char> m; 
	for (int i = 0; i < n; i++) 
	{ 
		m.insert(make_pair(arr[i], 'a')); 
		m.insert(make_pair(dep[i], 'd')); 
	} 

	int result = 0; 
	int plat_needed = 0; 

	multimap<int, char>::iterator it; 
	
	for (it = m.begin(); it != m.end(); it++) { 

		// If its 'a' then add 1 to plat_needed 
		// else minus 1 from plat_needed. 
		if ((*it).second == 'a') 
			plat_needed++; 
		else
			plat_needed--; 

		if (plat_needed>result) 
			result = plat_needed; 
	} 
	return result; 
} 

/********************* Time Comp : O(nlogn) *******************/

int findPlatform(int arr[], int dep[], int n) 
{ 
   
   sort(arr, arr+n);                             // Sort arrival arrays 
   sort(dep, dep+n);                             // Sort departure arrays                            
  
   int plat_needed = 1, result = 1;               // plat_needed indicates number of platforms needed at a time 
   int i = 1, j = 0;                              
  
   while (i < n && j < n) 
   { 
      // If next event in sorted order is arrival,  
      // increment count of platforms needed 
      if (arr[i] <= dep[j]) 
      { 
          plat_needed++; 
          i++;        
          if (plat_needed > result)                     // Update result if needed 
              result = plat_needed; 
      }      
      else                                             // Else decrement count of platforms needed 
      { 
          plat_needed--; 
          j++; 
      } 
   } 
  
   return result; 
} 
