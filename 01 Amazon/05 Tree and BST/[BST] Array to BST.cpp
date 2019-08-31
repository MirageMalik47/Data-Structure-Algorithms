Problem Statement  : https://practice.geeksforgeeks.org/problems/array-to-bst/0

/************************* Time Comp : O(n) **********************/

void array_to_BST(int *arr,int start,int end)
{
    if(start > end)
     return ;
    int i = (end+start)/2;
    cout<<arr[i]<<" ";
    array_to_BST( arr, start, i - 1);
    array_to_BST( arr, i + 1 , end);
}
