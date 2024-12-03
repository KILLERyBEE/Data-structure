#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,arr[5],temp,key;
    printf("Enter The array Elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nAfter Insertion Sorting\n");
    for(i=0;i<4;i++)
    {   
        key=arr[i+1];
        for(j=i;j>=0&&arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}