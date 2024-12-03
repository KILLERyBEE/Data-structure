#include<stdio.h>
int main()
{
    int L=0,R=4,M,arr[5],i,key;
    printf("Enter 5 sorted elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a key:\n");
    scanf("%d",&key);
    while(L<=R)
    {
        M=(L+R)/2;
        if(arr[M]==key)
        {
            printf("Key found at index %d.\n",M);
            break;
        }
        else if(arr[M]>key)
        {
            R=R-1;
        }
        else
        {
            L=L+1;
        }
    }
    return 0;
}