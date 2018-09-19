#include<stdio.h>

int main()
{
int a[10];
int i, n;

printf("How many element you want to save \n");
scanf("%d", &n);

printf("enter element one by one \n");


for(i = 0; i<n; i++)
{

scanf("%d", &a[i]);

}

printf("The List you entered\n");

for(i = 0; i<n; i++)
{

printf("%d ", a[i]);

}
return 1;
}
