#include <stdio.h>


void insertionSort(int A[], int n){
    
int hole,value,i;

for( i=0;i<n;i++){
    
    value= A[i];
    hole = i;
    
    while(hole>0 && A[hole-1]>value){
        A[hole] = A[hole-1];
        hole = hole -1;
    }
    A[hole] = value;

    }
     
}


int main()
 {
    int i;
    int A[] ={10,30,6,7,11,1};
    insertionSort(A,6);
    printf("In ascending order: ");
    for(i=0;i<6;i++)
        printf("%d  ",A[i]);
    return 0;
}
