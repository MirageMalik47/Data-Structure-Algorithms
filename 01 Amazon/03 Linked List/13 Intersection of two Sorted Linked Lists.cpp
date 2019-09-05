Problem Statement : https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/

/*
Input
1 2 3 4 6           -->  (Elements of 1st linked list) 
2 4 6 8              -->  (Elements of 2nd linked list)
Output
2 4 6       
*/

/******************************* Time Comp :O(m + n) *********************************/

void intersection(Node **head1, Node **head2,Node **head3)
{
    Node*t1=*head1;
    Node*t2=*head2;
    Node*t3=NULL;
    while(t1!=NULL && t2!=NULL)
    {
        Node *temp=new Node;
        temp->data=t1->data;
        temp->next=NULL;
        
        if(t1->data == t2->data)
        {
            if(t3==NULL)
            {
                 t3=temp;
                *head3=t3;
            }
            else
            {
                t3->next=temp;
                t3=t3->next;
            }
            t1=t1->next;
            t2=t2->next;
        }
        else if(t1->data > t2->data)
        {
            t2=t2->next;
        }
        else
        {
          t1=t1->next;  
        }
    }
}
