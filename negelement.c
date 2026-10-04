#include <stdio.h>

int main()
{
    int arr[10], size;
    int negativecount = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements in array: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            negativecount++;
        }
    }

    printf("Total no. of negative elements in array: %d\n", negativecount);

    return 0;
}