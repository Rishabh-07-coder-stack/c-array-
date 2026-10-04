#include<stdio.h>
int main()
{
int arr[10], size;

int evencount =0;
int oddcount =0;
printf("enter the size of array :");
scanf("%d",&size);
printf("enter the element in array :");
for (int i=0; i<size; i++)
{
scanf("%d",&arr[i]);
}
for (int i=0; i<size; i++)
{
    if (arr[i] % 2 == 0)
    {
        evencount++;
    }
    else{
        oddcount++;

    }
}
printf("total even element in array : %d\n",evencount);
printf("total odd element in array : %d\n",oddcount);
return 0;
}


