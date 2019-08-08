
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


#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*start = NULL;

node* reverseList(node *head);
void create(int x);
void display();

int main(){

int n,x,chc,ch=1,loc,locd;
char con,u='y';

// THIS PROGRAM OFFERS EVERY BASIC FEATURE OF LINKED LIST
// YOU CAN SEE ALL THE FEATURES IN THE MENU

while(ch!=13){
printf("ENTER THE CHOICE \n\n ******** ENTER 1 TO ENTER THE NEW ELEMENT ******* \n");
printf("******** ENTER 2 TO DISPLAY THE ELEMENTS ******* \n");
printf("******** ENTER 3 TO REVERSE THE SLL ******* \n");
scanf("%d", &chc);
switch (chc){

case 1:
printf("ENTER THE ELEMENT\n");
scanf("%d", &x);
create(x);
break;

case 2:
display();
break;

case 3:
start = reverseList(start);
break;


default: printf("WRONG INPUT\n");

}

printf("DO YOU WANT TO CONTINUE\n");
printf("IF YES THEN ENTER Y IF NO THEN ENTER N\n");
scanf(" %c", &con);
if(con!=u)
break;
}
}

// THIS FUNCTION CREATES A NODE

void create(int x){

struct node *ptr, *temp;
ptr = (struct node*)malloc(sizeof(struct node));
ptr->data = x;
ptr->next = NULL;
if(start == NULL){
start = ptr;
}
else{
temp = start;

    while(temp->next!=NULL){
    temp = temp->next;
    }
    
    temp->next = ptr;
}
}

// THIS FUNCTION PRINTS THE LINKED LIST

void display(){
struct node *temp;
temp = start;
printf("THE LINKED LIS AS FOLLOWS:\n");

if(start == NULL){
printf("LIST IS EMPTY\n");
}
else{
while(temp!=NULL){
printf("%d\n", temp->data);
temp = temp->next;
}
}
}



node* reverseList(node *head)
{
        // Initialize current, previous and 
        // next pointers 
        node* current = head; 

        node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    

    /* 
    struct node *temp1, *temp2;
    
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

    */
    
    
}