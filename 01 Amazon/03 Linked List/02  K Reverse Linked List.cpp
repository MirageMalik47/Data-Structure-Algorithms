Problem Statement : https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/ 

/********************************* Time Comp :O(n) ***************************/

Node *reverse (Node *head, int k)
{
    Node*current=head;
    Node*prev=NULL;
    Node*nx;
    int count=0;
    
    while(current!=NULL && count<k)
    {
        nx=current->next;
        current->next=prev;
        prev=current;
        current=nx;
        count++;
    }
    if(nx!=NULL)
        head->next=reverse(nx,k);
    
    return prev;
}
