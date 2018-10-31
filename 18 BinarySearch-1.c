#include <stdio.h>


int BinarySearch(int A[], int n, int se){
    
int first, last, middle;

    first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (A[middle] < se)
         first = middle + 1;    
      else if (A[middle] == se) {
         printf("%d found at location %d.\n", se, middle+1);
         return A[middle];
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   
    return -1;
 }


int main()
 {
    int i, n, j, search_element, A[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers in Assending order\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d",&A[i]);
 
   printf("Enter value to find\n");
   scanf("%d", &search_element);
   
    int value = BinarySearch(A,n,search_element);
    
    if(value == -1)
    printf("Element not found");
    
    return 0;
}

