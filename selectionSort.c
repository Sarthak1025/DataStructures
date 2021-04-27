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
//interchange with minimum element
void interchange(int *arr, int current_index, int min_index)
{
    int temp;
    temp = arr[min_index];
    arr[min_index] = arr[current_index];
    arr[current_index] = temp;
}
//return index of minimum element
int indexOfMinimumElement(int *arr, int current_index, int size)
{
    int i;
    int min_index = current_index;
    int min = arr[current_index];
    for(i = current_index + 1; i < size; i++)
    {
        if( min > arr[i] )
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
//Selection Sort
//For each index select the minimun index and then interchange it with the minimum element
void selectionSort(int *arr, int size)
{
    int i, min_index;
    for( i = 0; i < size; i++ )
    {
        min_index = indexOfMinimumElement(arr, i, size);
        interchange(arr, i, min_index);
    }
}
int main(int argc, char *argv[])
{
    int arr[] = {9798,4645,87498,32123,545};
    printf("\nBefore Sort:\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    selectionSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nAfter Selection Sort:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    display(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
