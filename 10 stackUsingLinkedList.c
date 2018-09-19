
#include <stdio.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   {
      
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }

}
void display()
{
   if(head == NULL)
   {
      printf("\nStack is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nStack elements are - \n");
      while(temp->next != NULL)
      {
    	 printf("%d ",temp->data);
    	 temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void pop()
{
   if(head == NULL)
	printf("\n\nStack is Empty!!!");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
    	 head = NULL;
    	 free(temp);
      }
      else
      {
    	head = temp->next;
    	free(temp);
      }
   }
}


int main()
{
   push(10);// 10
   push(20); // 10 20
   push(40); // 40 10 20
   push(50); // 50 40 10 20
   display();
   pop(); // 40 10 20
   display();
   pop(); // 10 20
   display();
    return 0;
}

