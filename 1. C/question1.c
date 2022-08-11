// 01. Write a C program to search an element in an Array using dynamic memory allocation.


#include <stdio.h>
#include <stdlib.h>

void search(int ar[], int el, int n1)
{
    int pos = 0;
    for(int i = 0; i < n1; i++)
    {
        if(ar[i] == el)
        {
            pos = i;
            break;
        }
    }
    if(pos != 0)
        printf("\nElement was found at position '%d'.", pos+1);
    else
        printf("\nElement you entered was not found.");
}

void main()
{
    int n,i,e, *ar;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ar = (int*)malloc(n*sizeof(int));

    printf("\nEnter the elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &e);

    search(ar, e, n);

    free(ar);
}


//------------------------//
