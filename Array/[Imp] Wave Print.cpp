/************************** Time Comp : O(n) *****************/

void wavePrint(int input[][1000], int row, int col)
{
	
   for(int j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
            cout<<input[i][j]<<" ";
        
        j++;
        
        for(int i=row-1;i>=0 && j<col;i--)
             cout<<input[i][j]<<" ";
    }

}
