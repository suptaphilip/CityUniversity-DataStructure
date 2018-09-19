#include <stdio.h>

int stack[20];
int head = -1;

void push(int data){
head++;
stack[head] = data;
}

int pop(){
int data = stack[head];
head--;
return data;

}

void display(){
    printf("\nData in your stack\n");
    for(int i=0;i<=head;i++){
            printf("%d ",stack[i]);
    }
    printf("\n");
}

void main()
{
   int value, choice;
   
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\t2. Pop\t3. Display\t4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2:  value = pop();
	 printf("\nyour pop data %d", value);
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}