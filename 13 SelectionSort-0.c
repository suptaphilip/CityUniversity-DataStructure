#include <stdio.h>


void selectionSort(int A[], int n){
    
int temp,iMin,i,j;

for( i=0;i<n;i++){
    
    iMin= i;
    
    for( j=i+1;j<n;j++){
        
         if(A[j]<A[iMin])
         {
            iMin=j;
         }
    }
     
/* To sort in descending order, change > to <. */
          
             temp=A[i];
             A[i]=A[iMin];
             A[iMin]=temp;
    }
}


int main()
 {
    int i;
    int A[] ={10,30,6,7,11,1};
    selectionSort(A,6);
    printf("In ascending order: ");
    for(i=0;i<6;i++)
        printf("%d  ",A[i]);
    return 0;
}
