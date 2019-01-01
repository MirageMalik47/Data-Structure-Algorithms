//Given a two dimensional n*m array, print the array in a sine wave order. i.e. print the first column top to bottom, 
//next column bottom to top and so on.
Input : 1  2  3  4 
        5  6  7  8 
        9 10 11 12
	
Output : 1 5 9 10 6 2 3 7 11 12 8 4


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
