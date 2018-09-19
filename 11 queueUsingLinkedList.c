
#include <stdio.h>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*head = NULL;

void enQueue(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
   {
      front = head = newNode;
   }
   else{
      head -> next = newNode;
      head = newNode;
   }
}
void deQueue()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
    printf("%d--->",temp->data);
       temp = temp -> next;
      }
      printf("%d\n",temp->data);
   }
}    
    

int main()
{
   enQueue(10);// 10
   enQueue(20); // 10 20
   enQueue(40); // 10 20 40
   enQueue(50); // 10 20 40 50
   display();
   deQueue(); // 20 40 50
   display();
   
    return 0;
}

