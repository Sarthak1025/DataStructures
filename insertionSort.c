#include <stdio.h>
#include <stdlib.h>

//Helper Functions
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
//Insertion Sort
//It involves usage of sub-arrays and then inserts each element of array in their respective position in the subarray
void insertionSort(int *arr, int size)
{
    int i, ptr, temp;
    for(i = 1; i < size; i++)
    {
        temp = arr[i];
        ptr = i-1;
        while(temp < arr[ptr])
        {
            arr[ptr + 1] = arr[ptr];
            ptr = ptr - 1;
        }
        arr[ ptr + 1] = temp;
    }
}
int main(int argc, char *argv[])
{
    int arr[] = {9798,4645,87498,32123,545};
    printf("\nBefore Sort:\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    insertionSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nAfter Insertion Sort:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
