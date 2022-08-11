// 02. Write a C program to find the 3rd user defined position based maximum element in an array using dynamic memory allocation.


#include <stdio.h>
#include <stdlib.h>

void sort(int ar[], int n)
{
    int i,j,min;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(ar[j] < ar[min])
                min = j;
        }
        int temp = ar[min];
        ar[min] = ar[i];
        ar[i] = temp;
    }
    printf("The 3rd user defined element based on the maximum number: %d", ar[n-3]);
}

void main()
{
    int ne, *arr;

    printf("Enter the number of elements: ");
    scanf(" %d", &ne);
    arr = (int*)malloc(ne*sizeof(int));

    printf("\nEnter the elements: \n");
    for(int j = 0; j < ne; j++)
    {
        scanf("%d", &arr[j]);
    }

    sort(arr, ne);
    free(arr);
}


//------------------------//
