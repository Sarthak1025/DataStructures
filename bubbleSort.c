#include <stdio.h>
#include <stdlib.h>

//Helper Functions
//interchange
void interchange(int *arr, int index)
{
    int temp;
    temp = arr[index];
    arr[index] = arr[index+1];
    arr[index+1] = temp;
}
//display 
void display(int *arr, int size)
{
    int i;
    printf("Array:\n----------------");
    for(i = 0; i < size; i++)
    {
        printf("\n%d", arr[i]);
    }
}
//Bubble Sort
//Swaps two elements in an array using if-block, thus the greatest element moves to the last position
void bubbleSort(int *arr, int size)
{
    int i, ptr;
    for (i=0; i<size-1; i++)
    {
        ptr = 0;
        while (ptr <= size-1-i)
        {
            if (arr[ptr] > arr[ptr+1])
                interchange(arr, ptr);
            ptr++;
        }
    }
}

int main(int argc, char *argv[])
{
    int arr[] = {9798,4645,87498,32123,545};
    printf("\nBefore Sort:\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    bubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nAfter Bubble Sort:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
