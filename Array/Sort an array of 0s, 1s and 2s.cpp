\******************** Time Comp O(n) **************\

void sortarray123(int arr* ,int n )
{
      int count0=0,count1=0,count2=0;
      for(int i=0;i<n;i++)
      {
         if(arr[i]==0)
          count0++;
         
         else if(arr[i]==1)
          count1++;
             
         else if(arr[i]==2)
          count2++; 
       }
       
      int i=0; 
      
      while(count0-- && i<n)
      {
          arr[i++]=0;
      }
      while(count1-- && i<n)
      {
          arr[i++]=1;
      }
      while(count2-- && i<n)
      {
          arr[i++]=2;
      }
           
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
 }
