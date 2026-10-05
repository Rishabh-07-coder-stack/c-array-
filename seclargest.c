#include<stdio.h>
int main()
{
int arr[10],size, i;
printf("enter the size of array :");
scanf("%d",&size);

printf("enter the elements in array :");
for(int i=0; i<size ; i++)
{
    scanf("%d", &arr[i]);
}
for(int i=0; i<size ; i++)
{

    if(arr[i]>0)
    {
        for(int j=i+1; j<size ; j++)
        {
            if(arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}

printf("second largest element in array is : %d\n" , arr[i]) ;
return 0;
}