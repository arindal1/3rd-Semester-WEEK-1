// 03. Write a C program to find the minimum element in an array using dynamic memory allocation.


#include <stdio.h>
#include <stdlib.h>

void sort(int ar[],int size)
{
    int i, j, min, temp;
    for(i = 0; i < size; i++)
    {
        min = i;
        for(j = i + 1; j < size; j++)
        {
            if(ar[j] < ar[min])
            min = j;
        }
        temp = ar[min];
        ar[min] = ar[i];
        ar[i] = temp;
    }
    printf("The smallest element is: %d", ar[0]);
}

void main()
{
    int n, i, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements: ");
    printf("\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    sort(arr, n);
    free(arr);
}


//------------------------//
