
#include<stdio.h>

void main(){

int a[10][10];

int i,j,rows, columns;
printf("How many rows you want \n");
scanf("%d", &rows);
printf("How many columns you want \n");
scanf("%d", &columns);

printf("Enter your array Element one by one \n");

for(i=0;i<rows;i++){

    for(j=0;j<columns;j++){

          scanf("%d", &a[i][j]);
    }

}
printf("your array \n");

for(i=0;i<rows;i++){

    for(j=0;j<columns;j++){

          printf("%d ", a[i][j]);
    }
    printf("\n");
}


}
