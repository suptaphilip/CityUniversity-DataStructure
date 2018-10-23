
/*C Program To Sort data in ascending order using bubble sort.*/
#include <stdio.h>
int main()
{
    int data[100],i,k,n,temp;
    //How many elements
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    
    // enter elements in array
    for(i=0;i<n;++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }

// Bubble sort strated here
    for(k=0;k<n-1;k++)
    for(i=0;i<n-k-1;i++)
    {
        if(data[i]>data[i+1])   /* To sort in descending order, change > to < in this line. */
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
    //printing the array
    printf("In ascending order: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
    return 0;
}
