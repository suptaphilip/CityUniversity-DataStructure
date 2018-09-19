#include<stdio.h>
#define SIZE 10

int queue[SIZE], head = -1, tail = 0,data;

void enQueue(int value){
   if(head == SIZE-1)
      printf("\nQueue is Full!!!");
   else{
      head++;
      queue[head] = value;
   }
}
int deQueue(){
   if(head == -1)
      printf("\nQueue is Empty!!! ");
   else{
      data = queue[tail];
      tail++;
   }
   return data;
}
void display(){
   if(head == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=tail; i<=head; i++)
	 printf("%d\t",queue[i]);
   }
}

void main()
{
   int value, choice;
   
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. enQueue\t2. deQueue\t3. Display\t4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2:  value = deQueue();
	 printf("\nyour deQueue data %d", value);
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}