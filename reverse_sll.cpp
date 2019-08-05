
/*This Function returns the head positon of the reverse of the given Linked List*/ 

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Should reverse list and return new head.
Node* reverseList(Node *head)
{
    struct Node *temp1, *temp2;
    
    if(head == NULL){
        return 0;
    }
    else if(head->next == NULL){
        return head;
    }
    else {
        
        temp1 = head;
        temp2 = head->next;
        
        while(temp2!=NULL){
            
            temp2->next = temp1;
            temp1 = temp2;
            temp2 = temp1->next;
        }
        
        head = temp1;
        
        return head;
    }
    
    
}