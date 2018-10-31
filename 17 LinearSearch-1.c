#include <stdio.h>


int LinearSearch(int A[], int n, int se){
    int i;
 for (i = 0; i < n; i++)
  {
    if (A[i] == se)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", se, i);
      return A[i];
    }
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
   
    int value = LinearSearch(A,n,search_element);
    
    if(value == -1)
    printf("Element not found");
    
    return 0;
}

