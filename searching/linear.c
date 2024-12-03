#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5],i,key;
    printf("Enter The array Elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nENTER KEY :: ");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            printf("\nElement found at index %d",i);
            break;
        }
    }
    return 0;
}