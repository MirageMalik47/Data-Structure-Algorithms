/********************** Time Comp : O(m+n) ********************/

//iterative 

int length (Node * head)
{
    int l =0; Node * temp =head;
    while(temp)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

Node* addTwoLists(Node* head1, Node* head2) 
{
    Node * temp1=head1;
    Node * temp2=head2;
    Node * c = new Node(1);
    int carry = 0 ;
    
    int l1 = length(temp1);
    int l2 = length(temp2);
    
    if(l1 > l2)
    {
        while(temp1 && temp2)
        {
            int x = temp1->data + temp2->data + carry;
            if(x >= 10)
            {
                x = x % 10; 
                temp1->data = x  ;
                carry = 1;
            }
            else
            {
                temp1->data = x % 10;
                carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next ;
        
        }
        while(temp1->next)
        {
            int y = temp1->data + carry ;
            if(y >= 10)
            {
                temp1->data = y % 10 ;
                carry = 1;
            }
            else
            {
                
                temp1->data = y % 10 ;
                carry = 0;
            }
            temp1= temp1->next ;
        }
        if(carry == 1)
        {
            if( temp1->data + carry >=10)
            {
                temp1->data = 0;
                temp1->next = c ;
            }  
        }
     return head1;   
    }
    
    else if(l1 < l2)
    {
        while(temp1 && temp2)
        {
            int x = temp1->data + temp2->data + carry;
            if(x >= 10)
            {
                temp2->data = x % 10;
                carry = 1;
            }
            else
            {
                temp2->data = x % 10 ;
                carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next ;        
        }
        while(temp2->next)
        {
            int y = temp2->data + carry ;
            if(y >= 10)
            {
                temp2->data = y % 10 ;
                carry = 1;
            }
            else
            {
                temp2->data = y ;
                carry = 0;
            }
            temp2= temp2->next ;
        }
        if(carry == 1)
        {
            if( temp2->data + carry >=10)
            {
                temp2->data = 0;
                temp2->next = c ;
            }  
        }
       return head2;  
    }
    else
    {
        while(temp1->next && temp2->next)
        {
            int x = temp1->data + temp2->data + carry;
            if(x >= 10)
            {
                x =  x  % 10; 
                temp2->data = x ;
                carry = 1;
            }
            else
            {
                temp2->data = x % 10;
                carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next ;
        
        }      
            int z = temp1->data + temp2->data + carry ;
            if( z >=10)
            {
                temp2->data = z % 10;
                temp2->next = c ;
            }
            else
            {
                temp2->data = z ;
            }      
        return head2 ;       
    }
}



//Recursive 

Node* addTwoLists(Node* head1, Node* head2) 
{
  if(head1 == NULL)
    return head2 ;
  if(head2 == NULL)
    return head1 ;
    
  Node * x = new Node( (head1->data + head2->data )%10 );
  x->next = addTwoLists(head1->next , head2->next);
  if( (head1->data + head2->data) >= 10 )
    x->next = addTwoLists( x->next,new Node(1) );
  return x;  
  
    
}


